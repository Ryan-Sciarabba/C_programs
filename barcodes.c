/*
   Purpose: To read a barcode
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 2.4.6
   Date of Creation: October 10th, 2018
   Date of Last Revision: October 15th, 2018
*/

#include <stdio.h>

int main(void){

	int aBarcode[12]; //Barcode array to read each specific value
	
	int barcode1, //First half of barcode 
	    barcode2, //Second half of barcode
            oddSum, //Sum of all odd digits
            evenSum, //Sum of all even digits except 12
            totalSum, //Total sum of all digits
            digit, //Current digit and increment in for loops
            rem, //Remainder of mod calculations
            checkDigit;	//Check digit to be compared to last digit of barcode

	//Ask the user for the first six digits of the barcode and store as barcode1
	printf("Input the first 6 digits of your barcode (Ex. 123456) >>> ");
	scanf("%i", &barcode1);
	
	//Ask the user for the second six digits of the barcode and store as barcode2
	printf("Input the second 6 digits of your barcode (Ex. 654321) >>> ");
	scanf("%i", &barcode2);
	
	//Transfer all digits in barcode1 to aBarcode[1] through aBarcode[6]
	for(digit = 6; digit >= 1; digit--){
		aBarcode[digit] = barcode1 % 10;
		barcode1 = barcode1 / 10;
	}

	//Transfer all digits in barcode2 to aBarcode[7] through aBarcode[12]
	for(digit = 12; digit >=7; digit--){
		aBarcode[digit] = barcode2 % 10;
		barcode2 = barcode2 / 10;
	}

	//Add all odd digits together and multiply by 3
	digit = 1;	

	while(digit <= 11){
		oddSum = oddSum + aBarcode[digit];
		digit += 2;
	}
	oddSum = oddSum * 3;
	
	//Add all even digits together
	digit = 2;

	while(digit <= 10){
		evenSum = evenSum + aBarcode[digit];
		digit += 2;
	}

	//Add oddSum and evenSum
	totalSum = oddSum + evenSum;
		
	//print barcode and last digit to user
	digit = 1;
	printf("Barcode: ");
	while(digit <= 12){
		printf("%i", aBarcode[digit]);
		digit++;
	}
	printf("\nDigit 12: %i\n", aBarcode[12]);
 
	//Check to see if the check digit equals 0, if not subtract from 10 and print
	if((totalSum % 10) == 0){
		checkDigit = 0;
	}
	else{
		checkDigit = 10 - totalSum % 10;
	}
	printf("Check Digit: %i\n\n", checkDigit);
	
	//Check to see if checkDigit equals the last digit of the barcode and print whether the barcode is valid or not
	if(checkDigit == aBarcode[12]){
		printf("Barcode is correct");
	}
	else{
		printf("Barcode is incorrect");
	}
	
	return 0;
}
