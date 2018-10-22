/*
   Purpose: To take user input as a number of fractions and print whether the result is equal to, less than, or greater than 1
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version Number: 1.2.4
   Date of Creation: October 10th, 2018
   Date of Last Revision: October 10th, 2018
*/

#include <stdio.h>

int main(void){

	double fraction, cHalf, numerator;	

	for(cHalf = 2.0; cHalf <= 30; cHalf++){
		for(numerator = 1; numerator <= cHalf; numerator++){ 
			fraction = fraction + (1.0/cHalf);
		}
		printf("%1.f X 1/%1.f = %4.2f\n", (numerator - 1), cHalf, fraction);
		fraction = 0.0;
	}
	return 0;
}
