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
	for(int i=0;i<size-1;i++){
		if(arr[i]<arr[i+1]){
			printf("%d ",arr[i]);
		}
	}
}
