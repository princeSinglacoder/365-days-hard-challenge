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
		printf("element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int m=size-2;
	while(m>0){
		int i=0;
		for(int j=i;j<=m;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		m--;
	}
	printf("After Bubble sort: \n--> ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
