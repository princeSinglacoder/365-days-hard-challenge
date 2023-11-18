#include<stdio.h>
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
	} // 3,6,5,9,8,7   target=14
	int target;
	printf("Enter a target number: \n");
	scanf("%d",&target);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	} // 3,5,6,7,8,9
	int start=0;
	int end=size-1;
	int flag=0;
	while(start<end){
		if(arr[start]+arr[end]==target){
			printf("\n[%d,%d]",start,end);
			flag++;
			end--;
		}
		else if(arr[start]+arr[end]>target){
			end--;
		}
		else{
			start++;
		}
	}
	if(flag==0){
		printf("There is no any elements which is match from target\n");
	}
}

