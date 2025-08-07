/*Develop an algorithm that simulate a calculator.
The user may choose between:
1 - Sum; 2 - Subtract; 3 - Multiply. 4 - Divide.
The user will be able to process two number per operation.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int first_number, second_number, operation, result, stop_operation = 1;
	char choose[2];
	
	while(stop_operation != 0){
		printf("Type the first number: ");
		scanf("%d", &first_number);
		printf("Type the second number: ");
		scanf("%d", &second_number);
		printf("Choose the operation:\n");
		printf("1 - Sum\n");
		printf("2 - Subtract\n");
		printf("3 - Multiply\n");
		printf("4 - Divide\n");
		scanf("%d", &operation);
		system("cls");
		switch (operation){
			case 1:
				result = first_number + second_number;
				printf("%d + %d = %d\n", first_number, second_number, result);
				printf("\n");
				printf("Would you like to end the operation? (Y/N)\n");
				scanf("%s", &choose);
				stop_operation = strcmp(choose, "Y");
				printf("\n");
				break;
			case 2:
				result = first_number - second_number;
				printf("%d - %d = %d\n", first_number, second_number, result);
				printf("\n");
				printf("Would you like to end the operation? (Y/N)\n");
				scanf("%s", &choose);
				stop_operation = strcmp(choose, "Y");
				printf("\n");
				break;
			case 3:
				result = first_number * second_number;
				printf("%d * %d = %d\n", first_number, second_number, result);
				printf("\n");
				printf("Would you like to end the operation? (Y/N)\n");
				scanf("%s", &choose);
				stop_operation = strcmp(choose, "Y");
				printf("\n");
				break;
			case 4:
				result = first_number / second_number;
				printf("%d / %d = %d\n", first_number, second_number, result);
				printf("\n");
				printf("Would you like to end the operation? (Y/N)\n");
				scanf("s", &choose);
				stop_operation = strcmp(choose, "Y");
				printf("\n");
				break;
			default:
				printf("Error\n");
				printf("\n");
				break;
		}
	}
	
	return 0;
}
