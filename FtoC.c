#include <stdio.h>

int main() {

	int F;
	double C;

	printf("Input temperature in Fahrenheit >>> ");
	scanf("%d", &F);

	C = (5.0/9.0) * (F - 32);

	printf("Fahrenheit: %d \n", F);
	printf("Celsius: %1f", C);

	return 0;
}
