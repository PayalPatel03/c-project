//negative elements from array
#include<stdio.h>
main(){
	int i,len;
	printf("Enter sizeo of array:\n");
	scanf("%d",&len);
	int arr[len];
	for(i=0;i<len;i++){
		printf("Enetr arry element: arr[%d]= ",i);
        scanf("%d",&arr[i]);
	}
	printf("Negative elements of the array are:");
	for(i=0;i<len;i++){
		if(arr[i]<0){
			printf(" %d  ",arr[i]);
		}
	}
	
}
