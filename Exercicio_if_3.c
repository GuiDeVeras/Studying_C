/*The final grade of a student is calculated with the three grades assigned, 
respectively, to a laboratorial work, a semestral
evaluation and a final exam. The three grade's average mentioned before
obey the following weights:

Grade						Weight
Laboratorial work				2
Semestral evaluation				3
Final exam					5

Make a program that receive the three grades, calculate and show the weighted 
average and the grade following the spread sheet below:

Weighted average		Grade
8,0 ~ 10,0			A
7,0 ~ 7,9			B
6,0 ~ 6,9			C
5,0 ~ 6,9			D
0,0 ~ 5,9			E*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float laboratorial_work_grade, semestral_evaluation_grade, final_exam_grade, weighted_average;
	
	printf("Type the laboratorial work's grade: ");
	scanf("%f", &laboratorial_work_grade);
	printf("Type the semestral evaluation's grade: ");
	scanf("%f", &semestral_evaluation_grade);
	printf("Type the final exam's grade: ");
	scanf("%f", &final_exam_grade);
	
	laboratorial_work_grade = laboratorial_work_grade * 2;
	semestral_evaluation_grade = semestral_evaluation_grade * 3;
	final_exam_grade = final_exam_grade *  5;
	weighted_average = (laboratorial_work_grade + semestral_evaluation_grade + final_exam_grade) / 10;
	
	if (weighted_average <= 10.0 && weighted_average >= 8.0){
		printf("Weighted average: %.2f\n", weighted_average);
		printf("Grade: A\n");
	}
	if (weighted_average <= 7.9 && weighted_average >= 7.0){
		printf("Weighted average: %.2f\n", weighted_average);
		printf("Grade: B\n");
	}
	if (weighted_average <= 6.9 && weighted_average >= 6.0){
		printf("Weighted average: %.2f\n", weighted_average);
		printf("Grade: C\n");
	}
	if (weighted_average <= 5.9 && weighted_average >= 5.0){
		printf("Weighted average: %.2f\n", weighted_average);
		printf("Grade: D\n");
	}
	if (weighted_average <= 5.9 && weighted_average >= 0.0){
		printf("Weighted average: %.2f\n", weighted_average);
		printf("Grade: E\n");
	}
		
	return 0;
	
}
