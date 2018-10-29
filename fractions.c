/*
   Purpose: To calculate and show representational error
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version Number: 1.3.4
   Date of Creation: October 10th, 2018
   Date of Last Revision: October 10th, 2018
*/

#include <stdio.h>

int main(void){

	
	double sum, //Sum of each fraction 
	     count, //Denominator of the fraction
	 	 i; //Iterator for the second loop

	//Header for things printed to the user
	printf("Fraction  Operator\n");
	
	//First loop to control which fractions to be added
	for(count = 2.0; count <= 30; count++){

		//Second loop to add the correct number of fractions
		for(i = 1; i <= count; i++){ 
	
			//Add the fractions together
			sum = sum + (1.0/count);
		}
		//Check to see if the sum equals 1 and print that
		if(sum == 1.0){
			printf("%2.f/%2.f        =        1\n", count, count);
		}
		//Check to see if the sum is less than 1 and print that
		else if(sum < 1.0){
			printf("%2.f/%2.f        <        1\n", count, count);
		}
		//Otherwise print that it is greater than 1
		else{
			printf("%2.f/%2.f        >        1\n", count, count);
		}

		//Reset the sum for furture calculations
		sum = 0.0;
	}
	return 0;
}
