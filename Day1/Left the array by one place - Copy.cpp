#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr[i]);
	} // 2,5,9,6,8,7
	int temp=arr[0];
	for(int i=1;i<size;i++){
		arr[i-1]=arr[i];
	}
	arr[size-1]=temp;
	printf("After rotate from one place: \n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
