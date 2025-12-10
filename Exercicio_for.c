/*Develop an algorithm that sum every whole
number between 1 and 10 (also).*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sum, counter;
	
	for (counter=1; counter<=10; counter++){
		sum = counter + sum;
	}
	printf("The sum of every whole number compreendidos between 1 and 10 is %d.\n", sum);
	return 0;
}
