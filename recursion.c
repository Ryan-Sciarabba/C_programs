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
	return 0;
}

int f(int x){

	int y;

	if(x <= 0){
		y = f(x + 3);
		printf("if: %i\n", y);
	}

	else{
		y = f(x - 2);
		y = f(x - 4);
		printf("else: %i\n", y);
	}
}
