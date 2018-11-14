#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int main(void){

	
	FILE *fptr;
	int a, i;
	char b[LEN];	

	fptr = (fopen("data.dat", "r"));
	fgets(b, LEN, fptr);
	i = 0;
	
	while(i < LEN){
		if(b[i] == ':'){
			break;
		}
		else{
			printf("%c", b[i]);
			i += 2;
		}
	}
	return 0;
}
