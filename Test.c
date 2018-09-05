#include <stdio.h>

int main() {
	
	//Define variables
	int a;
	int b;
	int c;

	//Ask for integer A
	printf("Input an integer >>> ");
	scanf("%i", &a);

	//Ask for integer B
	printf("Input a second integer >>> ");
	scanf("%i", &b);

	//Print out A and B then sum both for C
	printf("A: %i\nB: %i\n\n", a, b);
	c = a + b;
	printf("Sum: %i\n", c); 

	//End program
	return 0;
}
