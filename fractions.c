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

	for(numerator = 1; numerator <= 1; numerator++){
		for(cHalf = 2.0; cHalf <= 30; cHalf++){ 
			fraction = cHalf * (numerator/cHalf);
			printf("%1.f   *   %1.f/%1.f   =   %4.2f\n", cHalf, numerator, cHalf, fraction);
		}
	}
	return 0;
}
