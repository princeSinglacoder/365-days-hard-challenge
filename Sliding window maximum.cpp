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
	int k;
	printf("Enter a number: ");
	scanf("%d",&k);
	size=size-k;
	printf("--> ");
	for(int i=0;i<=size;i++){
		int max=arr[i];
		for(int j=i+1;j<k;j++){
			if(arr[j]>max){
				max=arr[j];
			}
		}
		printf("%d ",max);
		k++;
	}	
}
