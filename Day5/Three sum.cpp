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
	int i=0;
	for(int i=0;i<size;i++){
		if(arr[i]<0 && arr[i]==arr[i-1])continue;
		int j=i+1,k=size-1;
		while(j<k){
			int sum=arr[i]+arr[j]+arr[k];
			if(sum<target){
				j++;
			}
			else if(sum>target){
				k--;
			}
			else{
				printf("[%d,%d,%d]",arr[i],arr[j],arr[k]);
				j++;
				k--;
				while(j<k && arr[j]==arr[j-1])j++;
				while(j<k && arr[k]==arr[k+1])k--;
			}
		}
	}
}
