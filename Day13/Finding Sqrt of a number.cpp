#include<stdio.h>
#include<conio.h>
int sqroot(int num){
    int low=1,high=num;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        int k=mid*mid;
        if(num>=k){
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
    int num;
    printf("Enter a number and we give squre root of those number: \n");
    scanf("%d",&num);
    int ans=sqroot(num);
    printf("Square root is: %d",ans);
}
