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
	int target;
	printf("Enter a target number: \n");
	scanf("%d",&target);
	int low=0,high=size-1;
	int flag=1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			printf("Index is: %d\n",mid);
			flag=0;
			break;
		}
		else if(arr[mid]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if(flag){
		printf("%d is not present in array\n",target);
	}
}
