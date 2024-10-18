#include<stdio.h>
//int add(int a, int b);
//int sub(int a, int b);
//int multi(int a, int b);
int divide(int a, int b);
//int module(int a, int b);

int main(){
	int num1,num2;
	int ch;
	char c='y';

	while(c=='y'){
		printf("\nPress 1 for +\n");
    	printf("Press 2 for -\n");
    	printf("Press 3 for *\n");
    	printf("Press 4 for /\n");
    	printf("Press 5 for %%\n");
    	printf("Press 0 for exit\n");
    	printf("Enter your choice:");
    	scanf("%d",&ch);
    	
    	if(ch==0){
    		printf("You have exited the program.\n");
    		break;
		}
		if(ch>=1 && ch<=5){
			printf("Enter the value of first number:");
			scanf("%d",&num1);
			printf("Enter the value of second number:");
			scanf("%d",&num2);
		}
		
		switch(ch){
			case 1:
			printf("Addition of %d and %d is %d:\n",num1,num2,add(num1,num2));
			break;
			
			case 2:
      		printf("Subtraction of %d and %d is %d:\n",num1,num2,sub(num1,num2));
      		break;
      		
       		case 3:	
      		printf("Multiplication of %d and %d is %d:\n",num1,num2,multi(num1,num2));
      		break;
      	
       		case 4:
       			
       			if(num2!=0)
       			{
        		printf("Division of %d and %d is %d:\n",num1,num2,divide(num1,num2));
       			}
       			else
       			{
          		printf("Error......\n");
       			}
      		break;
      		case 5:
       			if(num2!=0)
       			{
        		printf("Module of %d and %d is %d:\n",num1,num2,module(num1,num2));
       			}
       			else
       			{
        		printf("Error...\n");
       			}
      			break;
      		default:
      		printf("Invalid choice! please try agin.\n"); 
		}
	}	
}

int add(int a,int b)
{
  return a+b;
}

int sub(int a,int b)
{
  return a-b;
}
int multi(int a,int b)
{
  return a*b;
}
int divide(int a,int b)
{
  return a/b;
}
int module(int a,int b)
{
  return a%b;
}
