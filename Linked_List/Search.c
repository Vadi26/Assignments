#include<stdio.h>
#include<stdlib.h>

struct oii {
	int data;
	struct oii *next;
};
// \brief Searches for the key element and returns its node number. Returns -1 if element not found
int SearchNode(struct oii *head, int key){
	struct oii *p = head;
	int i = 1;
	while(p != NULL){
		if(p -> data == key){
			return i;
		}
        p = p->next;
		i++;
	}
	return -1;
}

void display(struct oii *head){
    struct oii *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
}

int main(){
	struct oii *head;
	struct oii *one;
	struct oii *two;
	struct oii *three;
	struct oii *four;
	struct oii *five;
    one = malloc(sizeof(struct oii));
	two = malloc(sizeof(struct oii));
	three = malloc(sizeof(struct oii));
	four = malloc(sizeof(struct oii));
	five = malloc(sizeof(struct oii));

	one->data = 1;
	two->data = 2;
	three->data = 3;
	four->data = 4;
	five->data = 5;

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
	five->next = NULL;

	head = one;

    display(head);

    int i = SearchNode(head, 3);
    if (i != -1)
    {
        printf("Element found at %d Node.", i);
    }
    else{
        printf("Element not found");
    }

    return 0;
}
