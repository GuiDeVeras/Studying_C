/*Make a program that show the first
eight Fibonacci terms*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	int counter, sum, sum_assistant= 1, sum_assistant_2 = 0;
	
	printf("0 ");
	for(counter=1; counter<=8; counter++){
		printf("%d ", sum);
		sum = sum_assistant + sum_assistant_2;
		sum_assistant_2 = sum_assistant; 
		sum_assistant = sum;
	}
	printf("\n");
	
	return 0;
}
