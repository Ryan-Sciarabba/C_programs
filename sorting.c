#include <stdio.h>

int main(void){

	int i, num, pos, j, small, c;
	
	int array[100];
 
	printf("Input a set of numbers, one per line, to be sorted. (Max 100) Stop input by entering 00 >>> ");
	scanf("%i", &num);
	
	c = 0;

	for(i = 0; i < 100; i++){
		if(num == 00){
			break;
		}
		else{
			printf(" >>> "); 
			array[i] = num;
			scanf("%i", &num);
			c++;
		}
	
 	}

	for(i = 0; i < c; i++){
		pos = i;
		small = array[i];
		
		for(j = i; j < c; j++){
			if(array[j] < array[i]){
				array[i] = array[j];
				array[j] = small;
				small = array[i];	
			}
		}
	}
	printf("Sorted Array: %i", array[0]);
	
	for(i = 1; i < c; i++){
		printf(", %i", array[i]);
	}
	return 0;
}
