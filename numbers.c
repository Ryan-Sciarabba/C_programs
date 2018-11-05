/*
   Purpose: To take in a number and return some information about it
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version Number: 1.6.9
   Date of Creation: October 5th, 2018
   Date of Last Revision: November 5th, 2018
*/

#include <stdio.h>

//Prototype for the calculation function
void calculations(double *mSeven, double *mEleven, double *mThirteen, int *sum, double *prime);
	
int main(void){
	
	
	int c, //number of numbers to be input
	    x, //counter for while loop
	  sum; //sum of digits

	double mSeven, //multiple of seven
	      mEleven, //multiple of eleven
	    mThirteen, //multiple of thirteen
		prime; //prime number
	
	//See how many numbers will be input
	printf("How many numbers will be input? >>> ");
	scanf("%i", &c);
	
	//Set x to zero for while loop
	x = 0;
	
	//repeat for the number of numbers to be input
	while(x < c){
		calculations(&mSeven, &mEleven, &mThirteen, &sum, &prime);
		if(mSeven == 1){
			printf("Number is a multiple of 7\n");
		}
		else{
			printf("Number is not a multiple of 7\n");
		}
		if(mEleven == 1){
			printf("Number is a multiple of 11\n");
		}
		else{
			printf("Number is not a multiple of 11\n");
		}
		if(mThirteen == 1){
			printf("Number is a multiple of 13\n");
		}
		else{
			printf("Number is not a multiple of 13\n");
		}
		if(sum == 1){
			printf("Sum of the digits is even\n");
		}
		else{
			printf("Sum of the digits is odd\n");
		}
		if(prime == 1){
			printf("Number is prime\n");
		}
		else{
			printf("Number is not prime\n");
		}
		x++;
	}
}

void calculations(double *mSeven, double *mEleven, double *mThirteen, int *sum, double *prime){
	
	int number, //Given number
		 x, //The current number in c 
	   mNumber, //The multiple of the number 
	       rem; //The remainder in a later calculation

  	double i; //Iterator for a later loop 
	
	
	//Set i to 2 for the for the prime number calculation later
	i = 2.0;
		
	//Take in a number
	printf("Input a positive whole number (Ex. 7) >>> ");
	scanf("%i", &number);
	printf("\n");
		
	//Calculate multiples
	*mSeven = number / 7.0;
	*mEleven = number / 11.0;
	*mThirteen = number / 13.0;
	if(number != 0){
			
		//Check to see if the number is a multiple of 7, 11, 13
		if((int)*mSeven == *mSeven){
			*mSeven = 1;
		}
		else{
			*mSeven = 0;
		}
		if((int)*mEleven == *mEleven){
			*mEleven = 1;
		}
		else{
			*mEleven = 0;
		}
		if((int)*mThirteen == *mThirteen){
			*mThirteen = 1;
		}
		else{
			*mThirteen = 0;
		}
			
		//Find the sum of the digits
		rem = number;			
		*sum = 0;	
		
		while(rem != 0){
			*sum = rem % 10;
			rem = rem / 10;
		}

		//Check to see if the sum is odd or even
		if(*sum % 2 == 0){
			*sum = 1;
		}
		else{
			*sum = 0;
		}
	}

	//Check to see if the number is prime
	for(i = 2.0; i <= number; i++){
		*prime = number / i;
		if(number == i){
			*prime = 1;
			break;
		}
		if((int)*prime == *prime){
			*prime = 0;
			break;
		}
		else{
			continue;
		} 
	}
}
