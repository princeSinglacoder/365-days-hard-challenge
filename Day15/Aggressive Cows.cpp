#include<stdio.h>
#include<conio.h>
int func(int arr[],int size,int distance,int cows){
    int last=arr[0],countcows=1;
    for(int i=1;i<size;i++){
        if(arr[i]-last>=distance){
            countcows++;
            last=arr[i];
        }
    }
    if(countcows>=cows){
        return 1;
    }
    else{
        return -1;
    }
}
int maxdistance(int arr[],int size,int cows){
    int low=0,high=arr[size-1]-arr[0];
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(func(arr,size,mid,cows)==1){
            ans=mid;
            low=mid+1;
        }
        else{
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
    int arr[size];
    printf("Enter %d numbers: \n",size);
    for(int i=0;i<size;i++){
        printf("enter%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int cows;
    printf("How much cows you want: \n");
    scanf("%d",&cows);
    int ans=maxdistance(arr,size,cows);
    printf("Minimum distance of two cows maximum is: %d",ans);
}
