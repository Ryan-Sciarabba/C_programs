#include <stdio.h>
#include <math.h>

int main() {
	
	//Define Variables for Fahrenheit = F, Celsius = C, and the fraction in the formula;
	double F;
	double C;
	double Fraction = 5.0/9.0;
	double Last;
	
	//Get the temperature in Fahrenheit from user
	printf("Input temperature in Fahrenheit >>> ");
	scanf("%1f", &F);
	printf("\nF = %1f", F);

	//Formula to turn Fahrenheit into Celsius
	Last = F - 32.0;
	printf("\nLast = %1f", Last);
	C = Fraction * (F - 32.0);

	//Print the temperature in Fahrenheit and in Celsius
	printf("\nFraction = %1f", Fraction);
	printf("\nFahrenheit: %d \n", F);
	printf("Celsius: %1f", C);

	return 0;
}
