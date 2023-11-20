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
	for(int i=0;i<size-1;i++){
		int min=arr[i];
		int m=0,flag=0;
		for(int j=i+1;j<size;j++){
			if(arr[j]<min){
				min=arr[j];
				m=j;
				flag=1;
			}
		}
		if(flag){
			int temp=arr[i];
			arr[i]=arr[m];
			arr[m]=temp;
		}
	}
	printf("After selection sorting: \n--> ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
