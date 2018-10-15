/*
   Purpose: To read a barcode
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.0
   Date of Creation: October 10th, 2018
   Date of Last Revision: October 10th, 2018
*/

#include <stdio.h>

int main(void){

	int aBarcode[12]; 
	int oddSum, evenSum, totalSum, digit, rem;
	
	printf("Input all 12 barcode digits (Ex. 123456654321) >>> ");	
	
	for(digit = 0; digit <= 12; digit++){
		scanf("%d", &aBarcode[digit]);
		printf("Barcode digit: %d", aBarcode[digit]);
	}

	digit = 1;	

	while(digit <= 11){
		oddSum = oddSum + aBarcode[digit];
		printf("Digit: %i   Odd Sum: %i\n", aBarcode[digit], oddSum);
		digit += 2;
	}
	oddSum = oddSum * 3;

	digit = 0;

	while(digit <= 10){
		evenSum = evenSum + aBarcode[digit];
		printf("Digit: %i   Even sum: %i\n", aBarcode[digit], evenSum);
		digit += 2;
	}

	totalSum = oddSum + evenSum;

	printf("Total sum: %i", totalSum);
	
	return 0;
}
