/*
   Purpose: Create a payment plan for a single employee buisness

   Written by: Ryan Sciarabba
   Language: C (gcc target)
   Version #: 1.7.5
   Date of Creation: September 10th 2018
   Date of Last Revision: September 12th 2018
*/


#include <stdio.h>
#define SS_Rate 0.062
#define FIT_Rate 0.15
#define SIT_Rate 0.05
#define Medicare_Rate 0.0145

int main(){
	
	//Define veriables for Hours worked: Hours, Rate of Pay: PayRate, Gross Payment: Gross, Social Security: SS, Federal Income Tax: FIT, State Income Tax: SIT, Medicare: Medicare, andNet Payment: Net
	double Hours, PayRate, Gross, SS, FIT, SIT, Medicare, Net;

	//Get Hours worked and Payrate from the user
	printf("Input number of hours worked and your hourly rate of pay seperated by spaces(Ex. 40.0 10.75) >>> ");
	scanf("%lf %lf", &Hours, &PayRate);
	
	//Calculate and store Gross payment, Social Security, Federal Income Tax, State Income Tax, Medicare, and Net payment
	Gross = Hours * PayRate;
	SS = Gross * SS_Rate;
	FIT = Gross * FIT_Rate;
	SIT = Gross * SIT_Rate;
	Medicare = Gross * Medicare_Rate;
	Net = Gross - (SS + FIT + SIT + Medicare);

	//Print all variables
	printf("\n*********************************************************");
	printf("\nHours Worked: %40.2fhrs \nHourly PayRate: %38.2f$/hr \n\nGross Pay: %43.2f$ \n*********************************************************\nTax taken for: \n\nSocial Security: = %35.2f$ \nFederal Income: = %36.2f$ \nState Income: =  %37.2f$ \nMedicare: = %42.2f$ \n\nNet Pay: %45.2f$ \n*********************************************************", Hours, PayRate, Gross, SS, FIT, SIT, Medicare, Net);
	
	return 0;
}
