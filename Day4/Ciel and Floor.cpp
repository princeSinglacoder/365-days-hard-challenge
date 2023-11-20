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
	int num;
	printf("Enter a number: \n");
	scanf("%d",&num);
	int flag=1;
	if(num<arr[0]){
		printf("Ciel is: %d , Floor is: %d",arr[0],0);
		flag=0;
	}
	if(num>arr[size-1]){
		printf("Ciel is: %d , Floor is: %d",0,arr[size-1]);
		flag=0;
	}
	if(flag){
		for(int i=0;i<size;i++){
			if(num==arr[i]){
				printf("Ciel and Floor is: %d\n",num);
			}
			else if(arr[i]<num && arr[i+1]>num){
				printf("Ciel is: %d , Floor is: %d",arr[i],arr[i+1]);	
			}
		}
	}
}
