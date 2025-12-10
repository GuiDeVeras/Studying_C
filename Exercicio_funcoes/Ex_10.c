/*The cost of a new car to the final client will be the factory price plus
the distributor's profit, plus the taxes applied to the factory price. 
Make a program that receives the factory price of a vehicle,
the distributor's profit percentage and the taxes percentage.

In each iteam, creat a distinct function for calculate and return:

a) The distributor's profit;
b) The value of the taxes;
c) The price's vehicle;

After created cada uma each function, develop an algorithm that declarea and
invoke each one of them*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Calc_car.h"

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float car_factory_price, distributor_profit_percentage, taxes_percentage;
	
	printf("Type the vehicle's factory price: ");
	scanf("%f", &car_factory_price);
	fflush(stdin);
	printf("Type the distributor's profit percentage: ");
	scanf("%f", &distributor_profit_percentage);
	fflush(stdin);
	printf("Type the taxes percentage: ");
	scanf("%f", &taxes_percentage);
	fflush(stdin);
	
	printf("The distributor's profit will be %.2fR$\n", Distributor_profit(car_factory_price, distributor_profit_percentage));
	printf("The value of the taxes will be %.2fR$\n", Taxes(car_factory_price, taxes_percentage));
	printf("The price's vehicle will be %.2fR$\n", Car_price(car_factory_price, Taxes(car_factory_price, taxes_percentage), Distributor_profit(car_factory_price, distributor_profit_percentage)));
		
	return 0;
}
