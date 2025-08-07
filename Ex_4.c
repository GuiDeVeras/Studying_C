
/*Make a program that receives two
numbers and show the biggest between them.
If they are the same, show the message
"The numbers are equal". */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float first_number, second_number;
	
	printf("Type a number: ");
	scanf("%f", &first_number);
	printf("Type another number: ");
	scanf("%f", &second_number);
	
	if (first_number > second_number){
		printf("Biggest number: %.2f\n", first_number);
	}
	if (first_number < second_number){
		printf("Biggest number: %.2f\n", second_number);
	}
	if (first_number == second_number){
		printf("The numbers are equal\n");
	}
	
	return 0;
}
