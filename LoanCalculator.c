/*
   Purpose: To take a loan amount and calculate what the monthly payment would be
   Written by: Ryan Sciarabba
   Date of Creation: September 7th, 2018
   Date of Last Revision: September 7th, 2018
   Version #: 1.6.8
*/

#include <stdio.h>
#include <math.h>

int main() {

	float P, i, T;
	int n;	

	printf("Input original amount borrowed in dollars, interest rate in decimal, and number of payments in number of months separated by spaces (Ex. 10000 0.06 48) >>> ");
	scanf("%f %f %i", &P, &i, &n);
	
	T = (i * P) / (1 - pow((1 + i), -n));

	printf("\nAmount borrowed: %f \nInterest Rate: %f \nNumber of Payments: %i \nMonthly Payments: %f", P, i, n, T); 

	return 0;
}
