/* Make a program that receive the worker's salary and
the percentage increase, calculate and show the 
increment and the new salary*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float salary, percentage_increase, new_salary, increment;
	
	printf("Digit the salary's value: R$");
	scanf("%f", &salary);
	printf("Digit the salary's percentage increase: ");
	scanf("%f", &percentage_increase);
	
	new_salary = salary * (1 + (percentage_increase / 100));
	increment = new_salary - salary;
	
	printf("Increment: R$%.2f.\n", increment);
	printf("New salary: R$%.2f.\n", new_salary);
	
	
	return 0;
}
