
#include<stdio.h>
int main(){
	char *ptr;
	char str[100];
	printf("Enter any string:");
	gets(str);
	int i,count=0;
	for(i=0; str[i] !='\0';i++){
		count++;
	}
	printf("The length of string is :%d",count);	
}

