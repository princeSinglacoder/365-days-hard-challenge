#include<stdio.h>
#include<conio.h>
int kthmissing(int arr[],int size,int k){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low+k;
}
int main()
{
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers: \n",size);
    for(int i=0;i<size;i++){
        printf("enter%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Which kth number you find in array\n");
    scanf("%d",&k);
    int number=kthmissing(arr,size,k);
    printf("%d missing number is: %d",k,number);
}
