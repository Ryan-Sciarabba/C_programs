#include <stdio.h>
#include <math.h>

int main() {
	
	//Define Variables for Fahrenheit = F, Celsius = C, and the fraction in the formula;
	float F;
	float C;
	
	//Get the temperature in Fahrenheit from user
	printf("Input temperature in Fahrenheit >>> ");
	scanf("%f", &F);

	//Formula to turn Fahrenheit into Celsius
	C = (5.0/9.0) * (F - 32.0);

	//Print the temperature in Fahrenheit and in Celsius
	printf("\nFahrenheit: %f\n", F);
	printf("Celsius: %f", C);

	return 0;
}
