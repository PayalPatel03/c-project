#include <stdio.h>
main(){
    //Inilization of digit variable and declaring number variable
  int number,digit=0;  

  printf("Enter number of your choice:\n");
  scanf("%d",&number);
    //Applyinh while loop
  while(number!=0)
    {
      number=number/10;
      digit++;
    }
    //Required result
  printf("Here,the result is %d",digit);
}
