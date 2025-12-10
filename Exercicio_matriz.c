/*Develop an algorithm that fill a numerical matrix of dimensions 3x3.
After filling in the matrix, the user should insert a search key X.
If exists a number equal X, inside the matrix, the algorithm should show, 
on the screen, the row and column indices of the position X was found for 
the first time. ELse, the algorithm should terminate with a message
saying "Key not found.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3], i, j, search_key;
	
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Type a whole number for the row %d, column %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
			printf("\n");
		}
	}
	
	printf("Insert a serach key: ");
	scanf("%d", &search_key);
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(search_key == mat[i][j]){
				printf("The position of the number %d was row %d, column %d.\n", search_key, i+1, j+1);
				return 0;
			}
		}
	}
	printf("Key not found.\n");
	
	return 0;
}
