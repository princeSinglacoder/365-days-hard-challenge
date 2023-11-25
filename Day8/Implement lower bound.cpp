#include<conio.h>
#include<stdio.h>
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
	int target;
	printf("Enter a number and we will find smallest index of those number: \n");
	scanf("%d",&target);
	int low=0,high=size-1;
	int index=size;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=target){
			high=mid-1;
			index=mid;
		}
		else{
			low=mid+1;
		}
	}
	printf("%d\n",index);
}
