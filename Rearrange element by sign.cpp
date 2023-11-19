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
	int newarr[size];
	int pos=0;
	int neg=1;
	for(int i=0;i<size;i++){
		if(arr[i]>=0){
			newarr[pos]=arr[i];
			pos=pos+2;
		}
		else{
			newarr[neg]=arr[i];
			neg=neg+2;
		}
	}
	printf("After rearranging elements: \n--> ");
	for(int i=0;i<size;i++){
		printf("%d ",newarr[i]);
	}
}
