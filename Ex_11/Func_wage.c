#include "Func_wage.h"

float hour_worked_value(float a){
	
	return a / 2;
	
}

float gross_salary(int a, float b){
	
	return a * b;
	
}

float tax(float a){
	
	return a * 0.03;
	
}

float net_salary(float a, float b){
	
	return a - b;
	
}
