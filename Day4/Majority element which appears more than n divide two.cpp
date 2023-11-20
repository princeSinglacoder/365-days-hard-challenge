#include<stdio.h>
#include<conio.h>
int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int count=0;
	int element=0;
	for(int i=0;i<size;i++){
		if(count==0){
			element=arr[i];
			count++;
		}
		else if(arr[i]==element){
			count++;
		}
		else{
			count--;
		}
	}
	count?printf("%d is majority element",element):printf("No majority element in given array\n");
}
