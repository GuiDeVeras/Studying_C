/*Make a program that receives how long, in hours, the laborer worked
and the minimum wage. Create a function that calculate the laborer's wage,
following the rules below:

I - The hour worked is equal to half the minimum wage;
II - The gross salary is equal the hours worked multiplied by their value;
III - The tax is equal 3% of the gross salary;
IV - The laborer's wage is equal the gross salary minus the tax;

Create an algorithm that invoke the respective function and shows the laborer's wage.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Func_wage.h"

int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese");
	
	int hours_worked;
	float minimum_wage;
	
	printf("Type how long, in hours, the laborer worked: ");
	scanf("%d", &hours_worked);
	printf("Type the minimum wage: ");
	scanf("%f", &minimum_wage);
	
	printf("The hour worked's value will be %.2fR$\n", hour_worked_value(minimum_wage));

	printf("The gross salary will be %.2fR$\n", gross_salary(hours_worked, hour_worked_value(minimum_wage)));

	printf("The tax's deduction will be %.2fR$\n", tax(gross_salary(hours_worked, hour_worked_value(minimum_wage))));

	printf("The net salary will be %.2fR$\n", net_salary(gross_salary(hours_worked, hour_worked_value(minimum_wage)), tax(gross_salary(hours_worked, hour_worked_value(minimum_wage)))));

	return 0;
}
