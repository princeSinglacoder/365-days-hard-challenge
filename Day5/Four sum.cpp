#include<stdio.h>
#include<conio.h>
int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("enter%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int target;
	printf("Enter a target value: \n");
	scanf("%d",&target);
		for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		if(i>0 && arr[i]==arr[i-1])continue;
		for(int j=i+1;j<size;j++){
			if(j>i+1 && arr[j]==arr[j-1])continue;
			int k=j+1,l=size-1;
			while(k<l){
				int sum=arr[i]+arr[j]+arr[k]+arr[l];
				if(sum<target){
					k++;
				}
				else if(sum>target){
					l--;
				}
				else{
					printf("[%d,%d,%d,%d]",arr[i],arr[j],arr[k],arr[l]);
					k++;
					l--;
					while(k<l && arr[k]==arr[k-1])k++;
					while(k<l && arr[l]==arr[l+1])l--;
				}
			}
		}
	}
}
