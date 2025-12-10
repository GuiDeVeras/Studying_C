#include <stdio.h>
#include "Procedure_light.h"

void Procedure_light(float a, float b, float c, float d, float e){
	
	a = b / 1000;
	c = a * d;
	e = c - (c * 0,15);

	printf("The cost, in reais, of each kilowatt will be %.2fR$\n", a);
	printf("The bill, in reais, this residence should pay will be %.2fR$\n", c);
	printf("The cost, in reais, of the bill with 15 percent discount will be %.2fR$\n", e);
}
