#include<stdio.h>
#include<conio.h>
void fixarr(int arr2[], int size2){
	for(int i=1;i<size2;i++){
		if(arr2[i]<arr2[i-1]){
			int temp=arr2[i];
			arr2[i]=arr2[i-1];
			arr2[i-1]=temp;
		}
	}
}
int main()
{
	int size1,size2;
	printf("Enter the size of first array: \n");
	scanf("%d",&size1);
	printf("Enter the size of second array: \n");
	scanf("%d",&size2);
	printf("Enter %d numbers in first array: \n",size1);
	int arr1[size1];
	for(int i=0;i<size1;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("Enter %d numbers in second array: \n",size2);
	int arr2[size2];
	for(int i=0;i<size2;i++){
		printf("element%d: ",i+1);
		scanf("%d",&arr2[i]);
	}

	int i=0,j=0;
	while(i<size1){
		if(arr1[i]>arr2[j]){
			int temp=arr1[i];
			arr1[i]=arr2[j];
			arr2[j]=temp;
			if(arr2[j]>arr2[j+1]){
				fixarr(arr2,size2);
			}
		}
		i++;
	}
	for(int i=0;i<size1;i++){
		printf("%d ",arr1[i]);
	}	
	printf("\n");
	for(int j=0;j<size2;j++){
		printf("%d ",arr2[j]);
	}
}
