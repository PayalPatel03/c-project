//             5
//          4  5  4
//       3  4  5  4  3
//   2   3  4  5  4  3  2  
//1  2   3  4  5  4  3  2  1

#include<stdio.h>
main()
{
  int num=5,i,j,k;
  for (i=0;i<num;i++)
  {
    for (k= 0;k<num-i;k++)
    {
      printf("  ");
    }
    for (j=num-i;j<=5;j++)
    {
      printf("%d ",j);
    }
    for (j=4;j>=num-i;j--)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
}
