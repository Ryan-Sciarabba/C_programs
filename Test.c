#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	printf("Input an integer >>> ");
	scanf("%i", &a);
	printf("Input a second integer >>> ");
	scanf("%i", &b);
	printf("A: %i\nB: %i\n\n", a, b);
	c = a + b;
	printf("Sum: %i\n", c); 
	return 0;
}
