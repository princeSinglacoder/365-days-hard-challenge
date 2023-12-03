#include<stdio.h>
int calculatedays(int arr[],int load,int size){
    int sum=0,days=1;
    for(int i=0;i<size;i++){
        if(sum+arr[i]>load){
            days++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return days;
}
int ship(int arr[],int size,int days){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int low=max,high=sum,ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        int DAY=calculatedays(arr,mid,size);
        if(DAY<=days){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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
        printf("enter%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int days;
    printf("Enter how many days that's we will tell minimum capacity: \n");
    scanf("%d",&days);
    int capacity=ship(arr,size,days);
    printf("Minimum capacity is: %d",capacity);
}
