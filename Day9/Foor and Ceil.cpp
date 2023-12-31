#include<stdio.h>
#include<conio.h>
int findfloor(int arr[],int size,int target){
	int low=0,high=size-1;
	int floor=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<=target){
			floor=arr[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return floor;	
}
int findceil(int arr[], int size, int target){
    int low=0,high=size-1;
    int ceil=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ceil=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ceil;
}
int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d number: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int target;
	printf("Enter a number: \n");
	scanf("%d",&target);
	int floor=-1,ceil=-1;
	floor=findfloor(arr,size,target);
	ceil=findceil(arr,size,target);
	floor==-1?printf("Floor is: -1"):printf("Floor is: %d\n",floor);
	ceil==-1?printf("Ceil is: -1"):printf("Ceil is: %d\n",ceil);
}
