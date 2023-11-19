#include<stdio.h>
#include<conio.h>
int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers : \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int max=0,count=1,n=arr[0];
	for(int i=1;i<size;i++){
		int temp=n+1;
		if(arr[i]==temp){
			count++;
			n=temp;
		}
		else{
			count=1;
		}
		if(count>max){
			max=count;
		}
	}
	printf("Longest consequtive is: %d",max);
}
