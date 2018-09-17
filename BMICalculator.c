/*
   Purpose: To take the user's height and weight and calculate their Body Mass Index

   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.4.2
   Date Created: September 17th, 2018
   Date of Last Revision: September 17th, 2018
*/

#include <stdio.h>
#include <math.h>

int main(void) {
	
	double W, H, BMI;
	char s1[13] = "Underweight", s2[7] = "Normal", s3[11] = "Overweight", s4[6] = "Obese";

	printf("Input weight in pounds and height in inches separated by spaces (Ex. 200 72) >>> ");
	scanf("%lf %lf", &W, &H);	
	
	BMI = (703.0 * W) / (pow(H, 2.0));

	if(BMI < 18.5){
		printf("\n******************** \nWeight: %.0f \nHeight: %.0f \n\n******************** \nBMI: %.1f \nStatus: %s", W, H, BMI, s1);
	}
	else if(BMI < 25.0){
		printf("\n******************** \nWeight: %.0f \nHeight: %.0f \n\n******************** \nBMI: %.1f \nStatus: %s", W, H, BMI, s2);
	}
	else if(BMI < 30.0){
		printf("\n******************** \nWeight: %.0f \nHeight: %.0f \n\n******************** \nBMI: %.1f \nStatus: %s", W, H, BMI, s3);
	}
	else if(BMI >= 30.0){
		printf("\n******************** \nWeight: %.0f \nHeight: %.0f \n\n******************** \nBMI: %.1f \nStatus: %s", W, H, BMI, s4);
	}
	
	return 0;
}
