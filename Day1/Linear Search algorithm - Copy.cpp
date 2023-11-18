#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("elements%d: ",i+1);
		scanf("%d",&arr[i]);
	} // 3,6,5,9,8
	int num;
	printf("Which number are you find...\n");
	scanf("%d",&num);
	int flag=1;
	for(int i=0;i<size;i++){
		if(arr[i]==num){
			printf("Index: %d\n",i);
			flag=2;
		}
	}
	if(flag==1){
		printf("%d is not present in array\n",num);
	}
}
