/* 
   Purpose: Take in a value for temperature in Fahrenheit and convert to Celsius
   
   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.6
   Date of Creation: September 4th, 2018
   Date of Last Revision: September 9th, 2018
   
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	//Define Variables for Fahrenheit = F, Celsius = C
	float F;
	float C;
	
	//Get the temperature in Fahrenheit from user and store it as F
	printf("Input temperature in degrees Fahrenheit (Ex. 51) >>> ");
	scanf("%f", &F);

	//Formula to turn Fahrenheit into Celsius
	C = (5.0/9.0) * (F - 32.0);

	//Print the temperature in Fahrenheit and in Celsius
	printf("\nFahrenheit: %f\n", F);
	printf("Celsius: %f", C);

	return 0;
}
