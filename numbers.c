/*
   Purpose: To take in a number and return some information about it
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version Number: 1.5.6
   Date of Creation: October 5th, 2018
   Date of Last Revision: October 22th, 2018
*/

#include <stdio.h>

int main(void){
	
	int number, //Given number
		 c, //Number of numbers to be input
		 x, //The current number in c 
	   mNumber, //The multiple of the number 
	       sum,
	       rem; //The remainder in a later calculation

	double mSeven, //Multiple of seven
	      mEleven, //Multiple of eleven 
	    mThirteen, //Multiple of thirteen 
		    i, //Iterator for a later loop 
		prime; //Check to see if the number is prime
	
	//Set c to y for the continuation of the code
	printf("How many numbers will be input? >>> ");
	scanf("%i", &c);
	
	//Set i to 2 for the for the prime number calculation later
	i = 2.0;
	x = 0;
	
	
	//While loop to keep prompting for more numbers
	while(x < c){
		
		printf("Input a positive whole number (Ex. 7) >>> ");
		scanf("%i", &number);
		printf("\n");
		
		mSeven = number / 7.0;
		mEleven = number / 11.0;
		mThirteen = number / 13.0;
		if(number != 0){
			if((int)mSeven == mSeven){
				printf("Is %i a multiple of 7: Yes\n", number);
			}
			else{
				printf("Is %i a mupltiple of 7: No\n", number);
			}
			if((int)mEleven == mEleven){
				printf("Is %i a multiple of 11: Yes\n", number);
			}
			else{
				printf("Is %i a multiple of 11: No\n", number);
			}
			if((int)mThirteen == mThirteen){
				printf("Is %i a multiple of 13: Yes\n", number);
			}
			else{
				printf("Is %i a multiple of 13: No\n", number);
			}
			mNumber = number;
			sum = 0;

			while(mNumber != 0){
				rem = mNumber % 10;
				sum = sum + rem;
				mNumber = mNumber / 10;
			}
			if(sum % 2 == 0){
				printf("Sum of digits is even: %i\n", sum);
			}
			else{
				printf("Sum of digits is odd: %i\n", sum);
			}
		}

		i = 2.0;
		
		for(i; i <= number; i++){
			prime = number / i;
			if(number == i){
				printf("%i is a prime number\n\n", number);
				break;
			}
			if((int)prime == prime){
				printf("%i is not prime\n\n", number);
				break;
			}
			else{
				continue;
			} 
		}
		x = x + 1;
	}
	return 0;
}
