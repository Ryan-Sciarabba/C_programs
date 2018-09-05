#include <stdio.h>
#include <math.h>

int main() {
	
	char game[0];

	printf("What do you like to play? > ");
	scanf("%s", &game);
	printf("I like %s too!", game);
	return(0);
}

