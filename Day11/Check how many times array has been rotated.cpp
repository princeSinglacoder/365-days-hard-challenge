#include<stdio.h>
#include<conio.h>
int checkrotated(int arr[],int size){
    int low=0,high=size-1;
    int ans=arr[0],index=0;
    for(int i=1;i<size;i++){
        if(arr[i]>ans){
            ans=arr[i];
            index=i;
        }
    }
    printf("%d",index);
    while(low<=high){
        int mid=(low+high)/2;
        if(low<=high && arr[low]<ans){
            index=low;
            return index;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            ans=arr[mid];
            index=mid;
            high=mid-1;
        }
    }
    return index;
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
    int index=checkrotated(arr,size);
    printf("Array has been rotated %d times",index);
}
