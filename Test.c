#include <stdio.h>
<<<<<<< HEAD

void recurse(int *count);

int main() {
	
	int count;
	count = 2;
	recurse(&count);
	return 0;
=======
#include <string.h>

int main() {
	int result;
	result = strcmp("a", "A");
	printf("%i", result);
>>>>>>> 7dada608a4096077254bd4a4e6084b597f6a7936
}

void recurse(int *count){
	printf(count + 1);
	recurse(*count + 1);
}
