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
	int count1=0,element1=0;
	int count2=0,element2=0;
	for(int i=0;i<size;i++){
		if(count1==0){
			element1=arr[i];
			count1++;
		}
		else if(arr[i]==element1){
			count1++;
		}
		else if(count2==0){
			element2=arr[i];
			count2++;
		}
		else if(arr[i]==element2){
			count2++;
		}
		else{
			count1--;
			count2--;
		}
	}
	if(count1){
		printf("%d is majority element\n",element1);
	}
	if(count2){
		printf("%d is majority element",element2);
	}
	if(count1==0 && count2==0){
		printf("There is no majority in given array\n");
	}
}
