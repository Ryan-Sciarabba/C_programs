/*
   Purpose: To store employee data in a struct and linked list
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 2.2.4
   Date of creation: November 26th, 2018
   Date of last revision: November 28th, 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Create struct with fields about the employees
struct Employee{
	char fName[50];	
	char lName[50];
	int number;
	struct Employee *next;
};

int main(){
	
	int n; //Boolean for while loop

	//Initialize each employee and one more for sorting
	struct Employee* first = NULL;
	struct Employee* second = NULL;
	struct Employee* third = NULL;
	struct Employee* temp = NULL;
	
	//Allocate size for each
	first = (struct Employee*)malloc(sizeof(struct Employee));
        second = (struct Employee*)malloc(sizeof(struct Employee));
        third = (struct Employee*)malloc(sizeof(struct Employee));	
	
	//Get information from the user on each employee
	printf("Input first employee's first name >>> ");
	scanf("%s", &first->fName);
	printf("Input first employee's last name >>> ");
	scanf("%s", &first->lName);
	printf("Input first employee's number >>> ");
	scanf("%i", &first->number);
	printf("\n");
	
	printf("Input second employee's first name >>> ");
        scanf("%s", &second->fName);
        printf("Input second employee's last name >>> ");
        scanf("%s", &second->lName);
        printf("Input second employee's number >>> ");
        scanf("%i", &second->number);
	printf("\n");
	
	printf("Input third employee's first name >>> ");
        scanf("%s", &third->fName);
        printf("Input third employee's last name >>> ");
        scanf("%s", &third->lName);
        printf("Input third employee's number >>> ");
        scanf("%i", &third->number);
	printf("\n");
	
	//Link each struct
	first->next = second;
	second->next = third;
	third->next = NULL;
	
	//Sort the employees by number
	n = 0;	
	while(n == 0){
		if(first->number > second->number){
			temp = second;
			second = first;
			first = temp;
		}
		else if(second->number > third->number){
			temp = third;
			third = second;
			second = temp;
		}
		else{
			n = 1;
		}
	}
	
	//Print the sorted list
	printf("Employees sorted by number:\n");
	printf("Employee: %d %s %s\n", first->number, first->fName, first->lName);
	printf("Employee: %d %s %s\n", second->number, second->fName, second->lName);
	printf("Employee: %d %s %s\n", third->number, third->fName, third->lName);
}
