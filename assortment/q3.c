//transpose of matrix
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
	//transpose
	printf("The transpose of matrix is:\n");
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			printf(" %d ",arr[i][j]);	
		}
		printf("\n");
	}
}
