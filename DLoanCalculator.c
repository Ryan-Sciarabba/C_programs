/*
   Purpose: To print a detailed, monthly payment report for a loan
  
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version #: 1.0
   Date of Creation: September 9th, 2018
   Date of Last Revision: September 9th, 2018
*/

#include <stdio.h>
#include <math.h>

int main(void){

	//Define doubles for Principal: P, Interest Rate: i, and Monthly Payment: T;
	double P, i, ir, ip, pp, tpp, ta, T;
	//Define integer for Number of Payments: n and Current Month: m
	int n, m;

	//Take user input for variables P, i, and n
	printf("Input original amount borrowed in dollars, interest rate in percent, and number of payments in months separated by spaces (Ex. 10000 6 48) >>> "); 
	scanf("%lf %lf %i", &P, &i, &n);
	
	//Calculate monthly payment amount
	i = i / 100.0 / 12.0;
	printf("%.2f", i);
	T = (i * P) / (1.0 - pow((1.0 + i), -n));
	
	ip = 0.0;
	tpp = 0.0;
	

	for(m = 1; m <= n; m++){
	
		ir = P * i;
		ip = ip + ir;

		pp = T - ir;
		tpp = pp + tpp;
	
		ta = P - pp;
	
		printf("\nMonth %i: Unpaid Balance: $%.2f \tPayment per Month: $%.2f \tInterest Paid: $%.2f \tPrincipal Paid: $%.2f", m, ta, T, ip, tpp);
	}

	printf("\n************************************* \nAmount Borrowed: $%.2f \n \nInterest Rate: %.2f%% \nNumber of Payments: %i \n\n******************************* \nMonthly Payments: $%.2f", P, i, n, T);

	return 0;
}
