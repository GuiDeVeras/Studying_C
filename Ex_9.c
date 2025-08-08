/*Develop an algorithm that shows a
multiplication table of every whole number 
between 1 e 10 (also)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int primary_number, secundary_number, result;
	
	for(primary_number=1; primary_number<=10; primary_number++){
		printf("\n");
		for(secundary_number=1; secundary_number<=10; secundary_number++){
			result = primary_number * secundary_number;
			printf("%d * %d = %d\n", primary_number, secundary_number, result);
		}
	}
	printf("\n");
	return 0;
}
