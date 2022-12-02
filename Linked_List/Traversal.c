#include <stdio.h>
#include <stdlib.h>

struct heyo {
	int data;
	struct heyo *next;
};

void Print(struct heyo *p){
	while(p != NULL){
		printf("%d\n|\n|\nv\n\n", p -> data);
		p = p -> next;
	}
}

int main(){
	struct heyo *head;
	struct heyo *one;
	struct heyo *two;
	struct heyo *three;
	struct heyo *four;
	
	one = malloc(sizeof(struct heyo));
	two = malloc(sizeof(struct heyo));
	three = malloc(sizeof(struct heyo));
	four = malloc(sizeof(struct heyo));

	one->data = 1;
	two->data = 2;
	three->data = 3;
	four->data = 4;

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;

	head = one;

	Print(head);

	return 0;
}
