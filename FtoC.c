/* 
   Purpose: Take in a value for temperature in Fahrenheit and convert to Celsius
   
   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.6.1
   Date of Creation: September 4th, 2018
   Date of Last Revision: September 14th, 2018
   
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	//Define Variables for Fahrenheit = F, Celsius = C
	double F;
	double C;
	
	//Get the temperature in Fahrenheit from user and store it as F
	printf("Input temperature in degrees Fahrenheit (Ex. 51) >>> ");
	scanf("%lf", &F);

	//Formula to turn Fahrenheit into Celsius
	C = (5.0/9.0) * (F - 32.0);

	//Print the temperature in Fahrenheit and in Celsius
	printf("\nFahrenheit: %.2f\n", F);
	printf("Celsius: %.2f", C);

	return 0;
}
