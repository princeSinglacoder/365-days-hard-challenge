// basically in this code we return true if number is found otherwise false
#include<stdio.h>
#include<conio.h>
int searchrotated(int arr[],int size,int target){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return 1;
        }
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[mid]>arr[low]){
            if(arr[mid]>target && arr[low]<=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<target && arr[high]>=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
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
    printf("\nEnter a number: ");
    scanf("%d",&target);
    int ans=searchrotated(arr,size,target);
    ans==1?printf("Yes %d is present in array",target):printf("No %d is not present in array",target);
}
