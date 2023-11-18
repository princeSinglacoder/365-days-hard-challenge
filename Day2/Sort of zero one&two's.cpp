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
	} // 0,1,1,0,1,2,1,2,0,0,0
	int mid=0;
	int low=0;
	int high=size-1;
	for(int i=0;i<size;i++){
		if(arr[mid]==0){
			int temp=arr[mid];
			arr[mid]=arr[low];
			arr[low]=temp;
			mid++;
			low++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			int temp=arr[mid];
			arr[mid]=arr[high];
			arr[high]=temp;
			high--;
		}
	}
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
