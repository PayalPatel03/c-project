#include<stdio.h>
main(){
	int m1,m2,m3,total;
	float average;
	char grade;
	//Enter Marks by user.
	printf("Enter marks of first subject:\n");
	scanf("%d",&m1);
	
	printf("Enter marks of second subject:\n");
	scanf("%d",&m2);
	
	printf("Enter marks of third subject:\n");
	scanf("%d",&m3);
	
	//Total and average marks calculated. 
		total = m1 + m2 + m3;
    		printf("Total is:%d\n", total);

  		average = total / 3;
  			printf("Averege is:%.2f\n", average);
  			
  			//Ternary Operation
  			grade = average >= 90 ? 'A' : average >= 80 ? 'B' : average >= 70 ? 'C' : average >= 60 ? 'D' : 'F';
  				 
  				 //Applying Switch cases
  				switch(grade){
  					
  					case 'A': printf("Excellent work!!\n");
  					break;
  					
  					case 'B': printf("Well done\n");
  					break;
  					
  					case 'C': printf("Good Job\n");
  					break;
  					
  					case 'D': printf("You passed, but you could do better.\n");
  					break;
  					
  					 default: printf("Sorry you had failed the eximanation...\n");
				  }
				  // Eligibality level
				  	 if ((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D'))
  					{
    					printf("Congratulations! You are eligible for the next level\n");
  					}
  					else
  					{
    					printf("\nPlease try again next time:");
  					}
}