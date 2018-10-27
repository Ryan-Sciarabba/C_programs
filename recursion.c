/*
   Purpose: To take in a number and run it through two functions based on certain conditions
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.0
   Date of Creation: October 26h, 2018
   Date of Last Revision: October 26th, 2018
*/

#include <stdio.h>

int f(int x);

int main(void){
	
	int x;

	printf("Input a number (Ex. -4) >>> ");
	scanf("%i", &x);
	
	f(x);
	printf("x: %i\n", x);

	return 0;
}

int f(int x){

	if(x <= 0){
		x = x + 3;
		f(x);
		printf("if\n");
	}

	else{
		x = f(x - 2) + (x - 4);
		printf("else\n");
	}
	
	return(x);
}
