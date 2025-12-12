#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
	double x, y, z;
};
typedef struct pontos pontos;
int main(){

	double distancia;
	
	pontos p[2];
	for (int i=0;i<2;i++){
		printf("Digite a %d° abscissa\n", i+1);
		scanf("%lf", &p[i].x);
		printf("Digite a %d° ordenada\n", i+1);
		scanf("%lf", &p[i].y);
		printf("Digite o %d° terno\n", i+1);
		scanf("%lf", &p[i].z);
	}
	distancia = pow((pow((p[0].x - p[1].x),2) + pow((p[0].y - p[1].y),2) + pow((p[0].z - p[1].z),2)), 0.5);
	printf("A distancia entre o primeiro ponto e o segundo é %.2lf\n", distancia);
	return 0;
}
