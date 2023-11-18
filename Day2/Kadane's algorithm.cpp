#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the size of array: \n",size);
	scanf("%d",&size);
	printf("Enter %d numbers:\n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int csum=arr[0];
	int osum=arr[0];
	for(int i=1;i<size;i++){
		if(csum>0){
			csum=csum+arr[i];
		}
		else{
			csum=arr[i];
		}
		if(csum>osum){
			osum=csum;
		}
	}
	printf("--->%d",osum);
}
