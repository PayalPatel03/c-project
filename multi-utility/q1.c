#include<stdio.h>
main(){
	float cel,far;
	printf("Enter tempreture in degree Celcius:\n");
	scanf("%f",&cel);
	far=(1.8*cel)+32;
	printf("The converted temperature in degree fahrenheit is:%.2f",far);
}