/*Make a program that store the data of three people:
name, age, weight and height. In the end, the algorithm should show,
on the screen, the name and the age of the first person and the weight and height of the last person.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct peoples_data{
	char name[70];
	int age;
	float weight;
	float height;
};

typedef struct peoples_data peoples_data;

void clear_input_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	peoples_data person[3];
	int counter;
	
	for(counter=0; counter<=2; counter++){
		printf("Type the name of the person: ");
		scanf("%69[^\n]s", &person[counter].name);
		clear_input_buffer();
		printf("Type the age of %s: ", person[counter].name);
		scanf("%d", &person[counter].age);
		clear_input_buffer();
		printf("Type the weight of %s: ", person[counter].name);
		scanf("%f", &person[counter].weight);
		clear_input_buffer();
		printf("Type the height of %s: ", person[counter].name);
		scanf("%f", &person[counter].height);
		clear_input_buffer();
		puts("");
}
	printf("The name of the first person is %s and their age is %d.\n", person[0].name, person[0].age);
	printf("The weight of the last person is %.2fkg and their height is %.2fm.\n", person[2].weight, person[2].height);
		
	return 0;
}
