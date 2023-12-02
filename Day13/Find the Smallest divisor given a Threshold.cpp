// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int func(float arr[],int divisor,int size){
    int mintime=0;
    for(int i=0;i<size;i++){
        mintime+=ceil(arr[i]/divisor);
    }
    return mintime;
}
int kokoeat(float arr[],int size,int t){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int low=1,high=max;
    int mindivisor=0;
    while(low<=high){
        int mid=(low+high)/2;
        int ans=func(arr,mid,size);
        if(ans<=t){
            mindivisor=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return mindivisor;
}
int main()
{
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter %d numbers: \n",size);
    float arr[size];
    for(int i=0;i<size;i++){
        printf("enter%d: ",i+1);
        scanf("%f",&arr[i]);
    }
    int t;
    printf("Enter a threshold value: \n");
    scanf("%d",&t);
    int ans=kokoeat(arr,size,t);
    printf("Smallest divisor is: %d",ans);
}
