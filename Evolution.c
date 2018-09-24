#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int creatures[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

int main(int creatures){
	
	int i = 0;
	char a = 'a';
	
	srand(time(0));
	
	for( i; i <= 9; i++){
		
		int mutation = (rand() %4 - 1);
		creatures = creatures += mutation;
		printf("%d\n", creatures);
	}  
	
	scanf("%c", &a);
	if('y' == a){
		main(creatures);
	}
	else if('n' == a){
		  return 0;
	}
}
