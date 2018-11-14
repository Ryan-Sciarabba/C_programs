/*
   Purpose: To make a plural out of a given noun
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.7.2
   Date of Creation: October 22nd, 2018
   Date of Last Revision: November 9th, 2018
*/

#include <stdio.h>
#include <string.h>
	
int main(void){
	
	char noun[45]; //Noun given by the user
	int len; //Length of the string noun
	
	//Take in a noun
	printf("Please input a singular noun (Ex. House) >>> ");
	scanf("%s", &noun);
	
	//Find the length of the noun
	len = strlen(noun);
	
	//Check if the noun has anything to be made into plurals
	if(noun[len - 1] == 'y'){
		noun[len - 1] = 'i';
		noun[len] = 'e';
		noun[len + 1] = 's';
		noun[len + 2] = '\0';
	}
	//Replace ch, sh or s with es
	else if((noun[len - 2] == 'c' && noun[len - 1] == 'h') || (noun[len - 2] == 's' && noun[len - 1] == 'h') || (noun[len - 1] == 's')){
		noun[len] = 'e';
		noun[len + 1] = 's';
		noun[len + 2] = '\0';
	}
	else{
		noun[len] = 's';
		noun[len + 1] = '\0';
	}

	//Print the plural of the number
	printf("The plural is %s", noun);
	
	return 0;
}
