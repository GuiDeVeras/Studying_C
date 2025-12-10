/*It's know that the kilowatt cost one thousandth of the minimum wage.
Make a procedure that receives the minimum wage value and the amount of
kiilowatts consumed.
The procedure should calculate and return passing parameters by reference:

a) The cost, in reais, of each kilowatt;
b) The bill, in reais, this residence should pay;
c) The cost, in reais, of the bill with 15% discount.

Knowing that, develop an algorithm that asks the user the minimum wage 
and the amount of consumed kilowatt.
Invoke the respective procedure and show, on the screen, the informations
of the itens a), b) and c).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Procedure_light.h"

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float minimum_wage, kilowatts_consumed, kilowatt_cost, electricity_bill, discounted_electricity_bill;
	
	printf("Type the minimum wage: ");
	scanf("%f", &minimum_wage);
	printf("Type the amount of kilowatts consumed: ");
	scanf("%f", &kilowatts_consumed);
	
	Procedure_light(kilowatt_cost, minimum_wage, electricity_bill, kilowatts_consumed, discounted_electricity_bill);

	return 0;
}
