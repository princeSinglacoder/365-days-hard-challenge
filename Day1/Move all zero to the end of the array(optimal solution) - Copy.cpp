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
	}
	int n=0;
	for(int i=0;i<size;i++){
		if(arr[i]!=0){
			arr[n]=arr[i];
			n++;
		}
	}
	for(int i=n;i<size;i++){
		arr[i]=0;
	}
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
