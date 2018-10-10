/*
   Purpose: To take in a number and return some information about it
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version Number: 1.0
   Date of Creation: October 5th, 2018
   Date of Last Revision: October 5th, 2018
*/

#include <stdio.h>

int main(void){
	
	//Define variables for the given number = number, the number of numbers to be input = c, the current number of numbers input, the multiple of the number = mNumber, the sum of the digits = sum, and the remainder in a later calculation = rem
	int number, c, x, mNumber, sum, rem;

	//Define doubles for the multiple of seven = mSeven, the mutiple of eleven = mEleven, the multiple of thirteen = mThirteen, the for loop iterator = i, and the check for if the number is prime = prime
	double mSeven, mEleven, mThirteen, i, prime;
	
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
				printf("%i is a multiple of 7\n", number);
			}
			if((int)mEleven == mEleven){
				printf("%i is a multiple of 11\n", number);
			}
			if((int)mThirteen == mThirteen){
				printf("%i is a multiple of 13\n", number);
			}

			mNumber = number;
			sum = 0;

			while(mNumber != 0){
				rem = mNumber % 10;
				sum = sum + rem;
				mNumber = mNumber / 10;
			}
			if(sum / 2.0 == (int)(sum / 2)){
				printf("Sum of digits is even: %i\n", sum);
			}
			if(sum / 2.0 != (int)(sum / 2)){
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
