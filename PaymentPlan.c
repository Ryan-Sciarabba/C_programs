/*
   Purpose: Create a payment plan for a single employee buisness

   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.6.1
   Date of Creation: September 10th 2018
   Date of Last Revision: September 10th 2018
*/


#include <stdio.h>
#include <math.h>

int main(){
	
	//Define veriables for Hours worked: Hours, Rate of Pay: PayRate, Gross Payment: Gross, Social Security: SS, Federal Income Tax: FIT, State Income Tax: SIT, Medicare: Medicare, andNet Payment: Net
	double Hours, PayRate, Gross, SS, FIT, SIT, Medicare, Net;

	//Get Hours worked and Payrate from the user
	printf("Input number of hours worked and your hourly rate of pay seperated by spaces(Ex. 40.0 10.75) >>> ");
	scanf("%lf %lf", &Hours, &PayRate);
	
	//Calculate and store Gross payment, Social Security, Federal Income Tax, State Income Tax, Medicare, and Net payment
	Gross = Hours * PayRate;
	SS = Gross * 0.062;
	FIT = Gross * 0.15;
	SIT = Gross * 0.05;
	Medicare = Gross * 0.0145;
	Net = Gross - (SS + FIT + SIT + Medicare);

	//Print all variables
	printf("\n*********************************************************");
	printf("\nHours Worked: %.2f \nHourly PayRate: $%.2f/hr \n\nGross Pay: $%.2f \n*********************************************************\nTax taken for: \n\nSocial Security: Gross Pay * 6.2%% = $%.2f \nFederal Income: Gross Pay * 15%% = $%.2f \nState Income: Gross Pay * 5%% =  $%.2f \nMedicare: Gross Pay * 1.45%% = $%.2f \n\nNet Pay: $%.2f \n*********************************************************", Hours, PayRate, Gross, SS, FIT, SIT, Medicare, Net);
	
	return 0;
}
