//largest element from the 2D array
#include<stdio.h>
main(){
	int i,j;
	int row,col;
	int arr[10][10];
	printf("Enter array row size:");
	scanf("%d",&row);
	printf("Enter array column size:");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	 int max=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("Largest element is %d",max);
}
