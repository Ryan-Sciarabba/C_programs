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

	printf("Fraction  Operator\n");
	for(cHalf = 2.0; cHalf <= 30; cHalf++){
		for(numerator = 1; numerator <= cHalf; numerator++){ 
			fraction = fraction + (1.0/cHalf);
		}
		if(fraction == 1.0){
			printf("%2.f/%2.f        =        1\n", cHalf, cHalf);
		}
		else if(fraction < 1.0){
			printf("%2.f/%2.f        <        1\n", cHalf, cHalf);
		}
		else{
			printf("%2.f/%2.f        >        1\n", cHalf, cHalf);
		}
		fraction = 0.0;
	}
	return 0;
}
