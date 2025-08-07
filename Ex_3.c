#include <stdio.h>
#include <stdlib.h>

/*Jeremias has a timer capable of measuring time 
in seconds only. Knowing that, develop an algorithm that
receives the time, in seconds, and tell how many hours,
minutes and seconds passed since the recorded time*/

int main(int argc, char *argv[]) {
	
	int recorded_time, seconds = 0, minutes = 0, hours = 0;
	
	printf("How long, in seconds, was the recorded time?\n");
	scanf("%d", &recorded_time);
	
	seconds = recorded_time;
	
	if (seconds >= 60){
		minutes = seconds / 60;
		seconds = seconds % 60;
	} 
	if (minutes >= 60){
		hours = minutes / 60;
		minutes = minutes % 60;
	}
	printf("The time recorded was %d hours, %d minutes and %d seconds", hours, minutes, seconds);
		
	return 0;
}
