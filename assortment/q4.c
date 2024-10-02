//sum of row and cols
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
		int rownumber;
		printf("Enter row number:\n");
		scanf("%d",&rownumber);
		 if (rownumber>=0 && rownumber<row){
    		int rowsum = 0;
    		printf("Elements of row %d: ", rownumber);
    for (j=0;j<col;j++){
      printf("%d ", arr[rownumber][j]);
      rowsum += arr[rownumber][j];
    }
    printf("\nThe sum of row %d: %d\n", rownumber, rowsum);
  }
  else{
    printf("Invalid row number.\n");
  }
   int colnumber;
  printf("Enter column number: ");
  scanf("%d", &colnumber);

  if (colnumber>=0 && colnumber<col){
    int colsum = 0;
    printf("Elements of column %d: ", colnumber);
    for (i=0;i<row;i++){
      printf("%d ", arr[i][colnumber]);
      colsum += arr[i][colnumber];
    }
    printf("\nThe sum of column %d: %d\n", colnumber, colsum);
  }
  else{
    printf("Invalid column number.\n");
  }	
}
