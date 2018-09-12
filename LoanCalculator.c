
/*
   Purpose: To take a loan amount and calculate what the monthly payment would be
   
   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.7.3
   Date of Creation: September 7th, 2018
   Date of Last Revision: September 12th, 2018
   
*/

#include <stdio.h>
#include <math.h>

int main() {

	//Define doubles for Principal: P, Intrest Rate: i, and Monthly Payment: T
	double P, i, T;
	//Define integer Number of Payments: n
	int n;	

	//Take user input for variables P, i, and n
	printf("Input original amount borrowed in dollars, interest rate in decimal, and number of payments in number of months separated by spaces (Ex. 10000 0.06 48) >>> ");
	scanf("%lf %lf %i", &P, &i, &n);
	
	//Calculate monthly payment amount
	i = i / 12;
	T = (i * P) / (1.0 - pow((1.0 + i), -n));

	//Print variables P, i, n and T
	i = i * 12 * 100;
	printf("\n**************************************** \nAmount borrowed: $%.2f \nInterest Rate: %.2f%% \nNumber of Payments: %i \n\n**************************************** \nMonthly Payments: $%.2f", P, i, n, T); 

	return 0;
}
