/*
   Purpose: To take in a number and run it through a function then print it out
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.9.2
   Date of Creation: October 26th, 2018
   Date of Last Revision: November 12th, 2018
*/

#include <stdio.h>

//Prototype of f
int f(int x);

int main(void){
	
	int x; //Integer to be taken in from a user
	int y; //Integer to be printed out

	//Ask for an integer
	printf("Input a number (Ex. -4) >>> ");
	scanf("%i", &x);

	//Set y to the returned value of f(x)
	y = f(x);
	
	//Print y
	printf("%i", y);
	
	return 0;
}

/*
   Purpose: To take a number and modify it for main
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.4.3
   Date of Creation: October 26th, 2018
   Date of Last Revision: November 12th, 2018
*/

int f(int x){
	
	if(x <= 0){
		return(x + 3);
	}
	else{
		f(x - 2) + (x - 4);
	}
}
