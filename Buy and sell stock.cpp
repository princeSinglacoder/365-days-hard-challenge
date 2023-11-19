#include<stdio.h>
#include<conio.h>
int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers : \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int maxprofit=0,profit=0;
	int buy=0,sell=1;
	int i=0;
	while(i<size-1){
		if(arr[sell]-arr[buy]<0){
			buy=sell;
			sell++;
		}
		else{
			profit=arr[sell]-arr[buy];
			sell++;
		}
		if(profit>maxprofit){
			maxprofit=profit;
		}
		i++;
	}
	printf("Maximum profit is: %d\n",maxprofit);
}
