#include<stdio.h>
#include<conio.h>
int findfirst(int arr[],int size,int target){
	int low=0,high=size-1;
	int first=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			first=mid;
			high=mid-1;
		}
		else if(arr[mid]>target){
		    high=mid-1;
		}
		else{
		    low=mid+1;
		}
	}
	return first;	
}
int findlast(int arr[], int size, int target){
    int low=0,high=size-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
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
	printf("\nEnter a number: \n");
	scanf("%d",&target);
	int first=-1,last=-1;
	first=findfirst(arr,size,target);
	last=findlast(arr,size,target);
	printf("Number of occurrence is: ");
	first==-1?printf("0"):printf("%d",(last-first)+1);
}
