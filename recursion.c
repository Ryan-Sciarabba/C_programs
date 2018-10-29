/*
   Purpose: To take in a number and run it through two functions based on certain conditions
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.8.2
   Date of Creation: October 26th, 2018
   Date of Last Revision: October 29th, 2018
*/

#include <stdio.h>

//Prototype of f
int f(int y);

int main(void){
	
	int x;
	
	printf("Input a number (Ex. -4) >>> ");
	scanf("%i", &x);

	f(x);
	return 0;
}

int f(int y){
	
	if(y < 0){
		
		printf("y: %i\n", y);
		f(y + 3);
	}
	else if(y == 0){
		
		printf("y: %i\n", y);	
	}
	else{
		
		printf("y: %i\n", y);
		f(y - 2) + (y + 4);
	}
}
