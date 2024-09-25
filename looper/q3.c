
#include <stdio.h>
main(){
    //Declaring variables
  int num,digit1,digit2,result;
 
  printf("Enter number of your choice:\n");
  scanf("%d",&num);
    //Main logic
	digit2 = num%10;
 
  while(num>=10)
    {
      num=num/10;
    }
  digit1=num;
  
  result = digit1+digit2;
  //Reqired result
  printf("The reqired result is %d",result);
}
