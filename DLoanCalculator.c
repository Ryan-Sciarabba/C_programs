/*
   Purpose: To print a detailed, monthly payment report for a loan
  
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version #: 1.2.15
   Date of Creation: September 9th, 2018
   Date of Last Revision: September 9th, 2018
*/

#include <stdio.h>
#include <math.h>

int main(void){

	//Define doubles for Principal: P, Interest: i, Interest Rate: ir, Interest Paid: ip, Principal Paid: pp, Total Principal Paid: tpp, Total Amount: ta, and Monthly Payment: T;
	double P, i, ir, ip, pp, tpp, ta, T;
	//Define integers for Number of Payments: n and Current Month: m
	int n, m;

	//Take user input for variables P, i, and n
	printf("Input original amount borrowed in dollars, interest rate in percent, and number of payments in months separated by spaces (Ex. 10000 6 48) >>> "); 
	scanf("%lf %lf %i", &P, &i, &n);
	

	//Calculate monthly payment amount
	i = i / 100.0 / 12.0;
	T = (i * P) / (1.0 - pow((1.0 + i), -n));
	
	//Set variable's default values before the for loop
	ip = 0.0;
	tpp = 0.0;
	ta = P;

	//For every month leading up to the total number of months, print a statement giving the Month, Unpaid Amount, Monthly Payment, Interest Paid and Principal Paid
	for(m = 1; m <= n; m++){
	
		//Calculate the interest for that month and add it to the total interest paid
		ir = ta * i;
		ip = ip + ir;

		//Calculate the principal for that month and add it to the total principal paid
		pp = T - ir;
		tpp = pp + tpp;
	
		//Calculate the total amount to still be paid off
		ta = P - tpp;
	
		//Print the information calculated above
		printf("\nMonth %i: Unpaid Balance: $%.2f\tPayment per Month: $%.2f\tInterest Paid: $%.2f\t\tPrincipal Paid: $%.2f", m, ta, T, ip, tpp);
	}

	//Format the interest rate and then print the inputs given by the user and a short summary
	i = i * 100 * 12;
	printf("\n\n************************************* \nAmount Borrowed: $%.2f \n \nInterest Rate: %.2f%% \nNumber of Payments: %i \n\n******************************* \nMonthly Payments: $%.2f", P, i, n, T);

	return 0;
}
