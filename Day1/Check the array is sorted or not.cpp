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
	int flag=0;
	for(int i=0;i<size;i++){
		if(arr[i]<=arr[i+1]){
			
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Yes, Array is sorted");
	}
	else{
		printf("Array is not sorted");
	}
}
