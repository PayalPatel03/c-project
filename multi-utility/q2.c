#include<stdio.h>
main(){
	float basesalary,grosssalary,hra,da,ta,hraamount,daamount,taamount;
	printf("Enter the base-salary:\n");
	scanf("%f",&basesalary);
	printf("Enter the HRA Percentage:\n");
	scanf("%f",&hra);
	printf("Enter the DA Percentage:\n");
	scanf("%f",&da);
	printf("Enter the TA percentage:\n");
	scanf("%f",&ta);
		hraamount=(hra/100)*basesalary;
		daamount=(da/100)*basesalary;
		taamount=(ta/100)*basesalary;
		grosssalary=basesalary+hra+da+ta;
			printf("Gross Salary is:%.2f",grosssalary);
	
}