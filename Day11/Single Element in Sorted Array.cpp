#include<stdio.h>
int singlelement(int arr[],int size){
    if(arr[0]!=arr[1]){
        return arr[0];
    }
    if(arr[size-1]!=arr[size-2]){
        return arr[size-1];
    }
    int low=1,high=size-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2!=0 && arr[mid]==arr[mid-1] || mid%2==0 && arr[mid]==arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    int ans=singlelement(arr,size);
    printf("Single element is: %d",ans);
}
