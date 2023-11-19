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
	int n=arr[size-1];
	printf("Leader of array is: \n--> %d ",arr[size-1]);
	for(int i=size-2;i>=0;i--){
		if(arr[i]>n){
			printf("%d ",arr[i]);
			n=arr[i];
		}	
	}
}
