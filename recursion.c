/*
   Purpose: To take in a number and run it through a function then print it out
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.11.2
   Date of Creation: October 26th, 2018
   Date of Last Revision: November 19th, 2018
*/

#include <stdio.h>

//Prototype of f
int f(int y);

int main(void){
	
	int x; //Integer to be taken in from a user

	//Ask for an integer
	printf("Input a number (Ex. -4) >>> ");
	scanf("%i", &x);

	//Run f
	x = f(x);
	
	//Print x
	printf("%i", x);
	
	return 0;
}

/*
   Purpose: To take a number and modify it for main
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.6.2
   Date of Creation: October 26th, 2018
   Date of Last Revision: November 19th, 2018
*/

int f(int y){
	
	if(y <= 0){
		y = y + 3;
		return y;
	}
	else{	
		f(y - 3) + (y + 5);
	}
}
