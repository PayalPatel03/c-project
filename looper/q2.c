#include <stdio.h>
main(){

  int number,digit=0;  

  printf("Enter number of your choice:\n");
  scanf("%d",&number);

  while(number!=0)
    {
      number=number/10;
      digit++;
    }
  printf("Here,the result is %d",digit);
}
