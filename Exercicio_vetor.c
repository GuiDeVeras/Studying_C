/*Make a program that loads a vector and nine whole numbers,
calculate and shows the prime numbers and their respective position.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[9], i, c, cont = 0;
	
	for(i=0; i<=8; i++){
		printf("Type a number: ");
		scanf("%d", &v[i]);
		printf("\n");
	}
	
	for(i=0; i<=8; i++){
		for (c=1; c<=v[i]; c++){
			if (v[i] % c == 0){
				cont++;
			}
		}
		if (cont == 2){
			printf("The number %d of the position %d is prime\n", v[i], i+1);
		}
		cont = 0;
	}
	
	return 0;
}
