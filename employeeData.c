/*
   Purpose: To store employee data in a struct and linked list
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.0
   Date of creation: November 26th, 2018
   Date of last revision: November 26th, 2018
*/

#include <stdio.h>
#include <stdlib.h>
	
struct Employee{

	char firstName[50];
	char lastName[50];
	int number;
};

struct Employees{
	char fName;	
	char lName;
	int data;
	struct Employees *next;
};

int main(){
	
	struct Employee eOne;
	struct Employee eTwo;
	struct Employee eThree;

	struct Employees* first = NULL;
	struct Employees* second = NULL;
	struct Employees* third = NULL;
		
	printf("Input first employee's first name >>> ");
	scanf("%s", &eOne.firstName);
	printf("Input first employee's last name >>> ");
	scanf("%s", &eOne.lastName);
	printf("Input first employee's number >>> ");
	scanf("%i", &eOne.number);
	
	printf("Input second employee's first name >>> ");
        scanf("%s", &eTwo.firstName);
        printf("Input second employee's last name >>> ");
        scanf("%s", &eTwo.lastName);
        printf("Input second employee's number >>> ");
        scanf("%i", &eTwo.number);

	printf("Input third employee's first name >>> ");
        scanf("%s", &eThree.firstName);
        printf("Input third employee's last name >>> ");
        scanf("%s", &eThree.lastName);
        printf("Input third employee's number >>> ");
        scanf("%i", &eThree.number);
	
	first = (struct Employees*)malloc(sizeof(struct Employees));
	second = (struct Employees*)malloc(sizeof(struct Employees));
	third = (struct Employees*)malloc(sizeof(struct Employees));

	first->fName = *eOne.firstName;
	first->lName = *eOne.lastName;
	first->data = eOne.number;
	first->next = second;
	
	second->fName = *eTwo.firstName;
	second->lName = *eTwo.lastName;
	second->data = eTwo.number;
	second->next = third;
	
	third->fName = *eThree.firstName;
	third->lName = *eThree.lastName;
	third->data = eThree.number;
	third->next = NULL;
	
	if(first->data > second->data){
		if(second->data > third->data){
			printf(" %d ", third->data);
        		printf("%s ", third->fName);
        		printf("%s ", third->lName);
			
			printf(" %d ", second->data);
                        printf("%s ", second->fName);
                        printf("%s ", second->lName);

			printf(" %d ", first->data);
        	        printf("%s ", first->fName);
	                printf("%s ", first->lName);

		}
		else{
			printf(" %d ", second->data);
			printf("%s ", second->fName);
			printf("%s ", second->lName);
	
			
		}
	}
	else{
		printf(" %d ", first->data);
		printf("%s ", first->fName);
		printf("%s ", first->lName);
	}
}
