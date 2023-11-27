#include<stdio.h>
#include<conio.h>
int findmin(int arr[],int size){
    int ans=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(ans>arr[low]){
                ans=arr[low];
                return ans;
            }
        }
        if(arr[low]<=arr[mid]){
            if(ans>arr[low]){
                ans=arr[low];
            }
            low=mid+1;
        }
        else{
            ans=arr[mid];
            high=mid-1;
        }
    }
    return ans;
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
    int ans=findmin(arr,size);
    printf("Smallest element is: %d",ans);
}
