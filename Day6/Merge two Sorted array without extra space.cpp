#include<stdio.h>
#include<conio.h>
int main()
{
	int size1,size2,size3;
	printf("Enter the size of first array: \n--> ");
	scanf("%d",&size1);
	printf("Enter the size of second array: \n--> ");
	scanf("%d",&size2);
	printf("Enter the size of third array: \n--> ");
	scanf("%d",&size3);
	int arr1[size1];
	int arr2[size2];
	int arr3[size3];
	printf("Enter %d numbers in first array: \n",size1);
	for(int i=0;i<size1;i++){
		printf("enter%d: ",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("Enter %d numbers in second array: \n",size2);
	for(int i=0;i<size2;i++){
		printf("enter%d: ",i+1);
		scanf("%d",&arr2[size2]);
	}
	printf("Enter %d numbers in third array: \n",size3);
	for(int i=0;i<size3;i++){
		printf("enter%d: ",i+1);
		scanf("%d",&arr3[size3]);
	}
	// 1,5,10,20,40,80
	// 6,7,20,80,100
	// 3,4,15,20,30,70,80,120
	int i=0,j=0,k=0;
	while(i<size1 && j<size2 && k<size3){
		if(arr1[i]<arr2[j] && arr1[i]<arr3[k] || arr1[i]==arr1[i-1]){
			i++;
		}
		else if(arr2[j]<arr1[i] && arr2[j]<arr3[k] || arr2[j]==arr2[j-1]){
			j++;
		}
		else if(arr3[k]<arr2[j] && arr3[k]<arr1[i] || arr3[k]==arr3[k-1]){
			k++;
		}
		else{
			printf("%d ",arr1[i]);
			i++;
			j++;
			k++;
		}
	}
}
