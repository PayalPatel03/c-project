#include<stdio.h>
main(){
	int a1,a2,a3;
	printf("Enter value of angle1:\n");
	scanf("%d",&a1);
	printf("Enter value of angle2:\n");
	scanf("%d",&a2);
	a3=(180)-(a1+a2);
	printf("The third angle is:%d",a3);
}
