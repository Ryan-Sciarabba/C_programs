/*
   Purpose: To store employee data in a struct and linked list
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 3.1.2
   Date of creation: November 26th, 2018
   Date of last revision: December 3rd, 2018
*/

#include <stdio.h>
#include <stdlib.h>

//Create struct with fields about the employees
struct Employee{
	char fName[50];	
	char lName[50];
	int number;
	struct Employee *next;
};

int main(){
	
	int n; //Controller for while loop (number of employees)
	int i; //How many users will be input and largest ID number
	
	//Get how many employees will be input and set n to i
	printf("How many employees will be input? >>> ");
	scanf("%i", &i);
	n = i;
	
	//Initialize first employee and get employee information
	struct Employee* head = NULL;
	head = (struct Employee*)malloc(sizeof(struct Employee));
	printf("Employee's first name >>> ");
	scanf("%s", &head->fName);
	printf("Employee's last name >>> ");
	scanf("%s", &head->lName);
	printf("Employee's 3-digit number >>> ");
	scanf("%i", &head->number);
	printf("\n");

	//Create a temporary struct for employees to be written over and link head with temp
	struct Employee* temp = NULL;
	head ->next = temp;
	struct Employee* it = head;
	
	//Keep creating employees and linking them with the previous entry
	while(i > 1){
		temp = (struct Employee*)malloc(sizeof(struct Employee));
		printf("Employee's first name >>> ");
		scanf("%s", &temp->fName);
		printf("Employee's last name >>> ");
		scanf("%s", &temp->lName);
		printf("Employee's 3-digit number >>> ");
		scanf("%i", &temp->number);
		printf("\n");
		temp->next = NULL;
		it->next = temp;
		it = temp;
		i--;
	}
	
	//Set pointer to head and i to the first number in the linked list
	it = head;
	temp = it;
	i = it->number;
	
	//Find the largest employee ID in the list and store it as i then store the struct as temp
	while(n > 0){
		if(it->number > i){
			i = it->number;
			temp = it;
		}
		it = it->next;
		n--;
	}

	//Print the employee with the highest ID
	printf("Employee with the largest ID number:\n");
	printf("Employee: %d %s %s\n", temp->number, temp->fName, temp->lName);
	
	return 0;
}
