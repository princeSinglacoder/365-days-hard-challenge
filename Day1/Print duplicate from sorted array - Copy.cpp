#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Print duplicate elements from sorted array: \n");
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr[i]);
	} // 2,3,4,4,5,5,6
	printf("Duplicates elements are: ");
	for(int i=0;i<size-1;i++){
		if(arr[i]==arr[i+1]){
			printf("%d ",arr[i]);
		}
	}	
}
