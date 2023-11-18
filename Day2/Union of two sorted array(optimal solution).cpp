#include<stdio.h>
#include<conio.h>
main()
{
	int size1;
	printf("Enter the size of first array: \n");
	scanf("%d",&size1);
	printf("Enter %d numbers: \n",size1);
	int arr1[size1];
	for(int i=0;i<size1;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr1[i]);
	}
	int size2;
	printf("Enter the size of second array: \n");
	scanf("%d",&size2);
	printf("Enter %d numbers: \n",size2);
	int arr2[size2];
	for(int i=0;i<size2;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr2[i]);
	}
	int i=0,j=0;
	if(arr1[i]>arr2[j]){
		printf("%d ",arr2[j]);
		j++;
	}
	else if(arr1[i]<arr2[j]){
		printf("%d ",arr1[i]);
		i++;
	}
	else{
		printf("%d ",arr1[i]);
		i++;
		j++;
	}
	while(i<size1&&j<size2){
		if(arr1[i]==arr1[i-1]){
			i++;
		}
		else if(arr2[j]==arr2[j-1]){
			j++;
		}
		else if(arr1[i]<arr2[j]){
			printf("%d ",arr1[i]);
			i++;
		}
		else if(arr2[j]<arr1[i]){
			printf("%d ",arr2[j]);
			j++;
		}
		else{
			printf("%d ",arr1[i]);
			i++;
			j++;
		}
	}
	while(i<size1){
		printf("%d ",arr1[i]);
		i++;
	}
	while(j<size2){
		printf("%d ",arr2[j]);
		j++;
	}
}
