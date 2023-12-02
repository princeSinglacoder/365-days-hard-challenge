#include<stdio.h>
#include<conio.h>
#include<math.h>
int sqroot(int num,int k){
    int low=1,high=num;
    while(low<=high){
        int ans=0;
        int mid=(low+high)/2;
        ans=pow(mid,k);
        if(ans==num){
            return mid;
        }
        else if(ans>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int k;
    printf("Enter nth number to find root: \n");
    scanf("%d",&k);
    int num;
    printf("Enter a number and we give %d root of those number: \n",k);
    scanf("%d",&num);
    int ans=sqroot(num,k);
    ans==-1?printf("Ans is: -1"):printf("Ans is: %d",ans);
}
