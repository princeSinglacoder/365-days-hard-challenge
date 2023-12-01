// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int func(float arr[],int hourly,int size){
    int mintime=0;
    for(int i=0;i<size;i++){
        mintime+=ceil(arr[i]/hourly);
    }
    return mintime;
}
void kokoeat(float arr[],int size,int tim){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int low=1,high=max;
    int minimumtime=0;
    while(low<=high){
        int mid=(low+high)/2;
        int mintime=func(arr,mid,size);
        if(mintime<=tim){
            minimumtime=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("We will eat %dbanana/hr",minimumtime);
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
    int tim;
    printf("Enter a time: \n");
    scanf("%d",&tim);
    kokoeat(arr,size,tim);
}
