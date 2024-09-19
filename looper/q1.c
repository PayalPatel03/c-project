#include<stdio.h>
main(){
	//Inilisation of variable
	char letter='a';
	//Applying do-while loop
	do{

		printf(" %c ",letter);
		//Incrementing by 4 acc to question
		letter=letter+4;		
	}
	//Final condition
	while(letter<='z');
}