#include <stdio.h>

void recurse(int *count);

int main() {
	
	int count;
	count = 2;
	recurse(&count);
	return 0;
}

void recurse(int *count){
	printf(count + 1);
	recurse(*count + 1);
}
