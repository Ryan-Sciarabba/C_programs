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

	first->data = 1;
	first->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printf(" %d ", first->data);
	printf("%s ", eOne.firstName);
	printf("%s ", eOne.lastName);
	printf("%i\n", eOne.number);
	
	printf(" %d ", second->data);
        printf("%s ", eTwo.firstName);
        printf("%s ", eTwo.lastName);
        printf("%i\n", eTwo.number);

	printf(" %d ", third->data);
        printf("%s ", eThree.firstName);
        printf("%s ", eThree.lastName);
        printf("%i\n", eThree.number);
}
