/*
   Purpose: To print a detailed, monthly payment report for a loan
  
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version #: 1.8.4
   Date of Creation: October 3rd, 2018
   Date of Last Revision: October 14th, 2018
*/

#include <stdio.h>

int main(void){

	//Define doubles for Salary: S, Percent Salary Increase: PSI, Percent Contributed: PC, Annual Rate of Return: ARR, Starting Amount: ST, Contribution: CON, Earnings: E, Closing Amount: CLO
	double S, PSI, PC, ARR, ST, CON, E, CLO;
	//Define ints for Starting Year: SY, Ending Year: EY and Number of Lines: L
	int SY, EY, L;
	//Define char for later question: C
	char C;

	//Take user input for variables S, PSI, PC, and ARR
	printf("Input annual salary in dollars, percent salary increase, percent of salary contributed and annual rate of return separated by spaces (Ex. 40000 4 10 5) >>> "); 
	scanf("%lf %lf %lf %lf", &S, &PSI, &PC, &ARR);
	
	//Take user input for variables SY and EY
	printf("Input starting year and ending year separtated by spaces (Ex. 2014 2016) >>> ");
	scanf("%i %i", &SY, &EY);

	//Define starting variables and calculate the first Contribution and Closing and change PC to decimal for calculation
	ST = 0.0;
	E = 0.0;
	L = 0;
	CON = S * (PC / 100.0);
	CLO = ST + CON + E;

	//Print given variables and categories
	printf("\nSalary: $%.2f \nPercent Salary Increase: %.2f%% \nContribution Rate: %.2f%% \nAnnual Rate of Return: %.2f%% \nStarting Year: %d \nEnding Year: %d \n\nYear \tSalary \t\tStarting \tContribution \tEarnings \tClosing", S, PSI, PC, ARR, SY, EY);

	//Convert percents to decimal for calculations
	PSI = PSI / 100.0;
	PC = PC / 100.0;
	ARR = ARR / 100.0;	

	//Loop to calculate most variables
	for(SY; SY <= EY; SY++){
		if(L < 25) {
			printf("\n%d \t$%7.2f \t$%7.2f \t$%7.2f \t$%7.2f \t$%7.2f", SY, S, ST, CON, E, CLO);
			ST = CLO;
			S = S + (S * PSI);
			E = ST * ARR;
			CON = S * PC;
			CLO = ST + CON + E;
			L = L + 1;	
		}
		else {

			//Prompt the user to continue printing lines when there are more than 24 onscreen
			printf("\nContinue? (y, n) >>> ");
			scanf(" %c", &C);
			if(C == 'y') {
				L = 0;
				SY = SY - 1;
				printf("\nYear \tSalary \t\tStarting \tContribution \tEarnings \tClosing");
				continue;
			}
			else if(C == 'n') {
				break;
			}
		}
	}
	return 0;
}
