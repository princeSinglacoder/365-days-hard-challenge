#include<stdio.h>
#include<conio.h>
int main()
{
	int n=7;
	int arr[n]={20,30,40,50,60,5,10};
	int target=9;
	int low=0,high=n-1;
	int flag=1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			printf("Index is: %d",mid);
			flag=0;
			break;
		}
		if(arr[low]<arr[mid]){
			if(target>=arr[low] && target<arr[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		else{
			if(target>arr[mid] && target<=arr[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
	}
	if(flag){
		printf("%d is not present in the array\n",target);
	}
}
