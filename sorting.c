#include <stdio.h>

int main(void){

	int i, num, pos, j, small, large;

	
	printf("Input number of integers to be input (Max 100) >>> ");
	scanf("%i", &num);
	
	int array[num];
 
	printf("Input a set of numbers, one per line, to be sorted");
	for(i = 0; i < num; i++){
		printf(" >>> "); 
		scanf("%i", &array[i]);
 	}

	for(i = 0; i < num; i++){
		pos = i;
		small = array[i];
		
		for(j = i; j < num; j++){
			if(array[j] < array[i]){
				array[i] = array[j];
				array[j] = small;
				small = array[i];	
			}
		}
	}
	printf("Sorted Array: %i", array[0]);
	
	for(i = 1; i < num; i++){
		printf(", %i", array[i]);
	}
	return 0;
}
