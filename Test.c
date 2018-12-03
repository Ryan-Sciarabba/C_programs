#include <stdio.h>
#include <stdlib.h>

struct Person{
	char name[50];
	int data;
	struct Person *next;
};
	
int main(){

	int n, i;
	
	printf("How many people will be named?");
	scanf("%i", &n);	
	i = n;

	struct Person* head = NULL;
	head = (struct Person*)malloc(sizeof(struct Person));

	printf("Person's name: ");
	scanf("%s", &head->name);
	printf("Person's number: ");
	scanf("%i", &head->data);
	
	struct Person* cur = NULL;
	head->next = cur;
	struct Person* it = head;

	while(n > 1){
		cur = (struct Person*)malloc(sizeof(struct Person));
		printf("Person's name: ");
		scanf("%s", &cur->name);
		printf("Person's number: ");
		scanf("%i", &cur->data);
		cur->next = NULL;
		it->next = cur;
		it = cur;
		n--;
	}
	it = head;
	cur = it;
	n = it->data;
	while(i > 0){
		if(it->data > n){
			n = it->data;
			cur = it;
		}
		it = it->next;
		i--;
	}
	printf("%s, %i", cur->name, cur->data);
	return 0;
}

	
