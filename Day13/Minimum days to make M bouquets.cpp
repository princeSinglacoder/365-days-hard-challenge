#include<stdio.h>
#include<conio.h>
int func(int arr[],int size,int days,int m,int k){
    int count=0,q=0;
    for(int i=0;i<size;i++){
        if(arr[i]<=days){
            count++;
        }
        else{
            q=q+count/k;
            count=0;
        }
    }
    q=q+count/k;
    if(m<=q){
        return 1;
    }
    else{
        return -1;
    }
}
int mbucket(int arr[],int size,int m,int k){
    if(size<m*k)return -1;
    int min=arr[0],max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int low=min,high=max;
    int days=0;
    while(low<=high){
        int mid=(low+high)/2;
        int ans=func(arr,size,mid,m,k);
        if(ans==1){
            days=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return days;
}
int main()
{
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter %d numbers: \n",size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int m,k;
    printf("Enter total number of bucket: \n");
    scanf("%d",&m);
    printf("Enter how many flower put in one bucket: \n");
    scanf("%d",&k);
    int days=mbucket(arr,size,m,k);
    printf("Minimum days required is: %d",days);
}
