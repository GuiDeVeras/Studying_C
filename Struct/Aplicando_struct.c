#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct endereco{
	char rua[50];
	int numero;
};
typedef struct endereco endereco;
struct pessoa{
	char nome[50];
	int idade;
	endereco ender;
};
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
typedef struct pessoa pessoa;
int main(){
	pessoa p[3];
	for (int i=0; i<3; i++){
		printf("%dº pessoa:\n", i+1);
		fgets(p[i].nome, sizeof(p[i].nome), stdin);
		printf("Idade:\n");
		scanf("%d", &p[i].idade);
		limpar_buffer();
		printf("Rua:\n");
		fgets(p[i].ender.rua, sizeof(p[i].ender.rua), stdin);
		printf("Numero:\n");
		scanf("%d", &p[i].ender.numero);
		limpar_buffer();
		printf("\n");
	}
	system("clear");
	for (int i=0; i<3; i++){
		printf("%dº pessoa:\n", i+1);
		printf("%s", p[i].nome);
		printf("%d\n", p[i].idade);
		printf("%s", p[i].ender.rua);
		if (i != 2){
			printf("%d\n\n", p[i].ender.numero);
		} else {
			printf("%d\n", p[i].ender.numero);
		}
	}
	return 0;
} 
