#include<stdio.h>
#include<stdlib.h>

struct oii {
	int data;
	struct oii *next;
};

void Sort_Linked_List(struct oii *head){
    struct oii *current = head, *index = NULL;
    int temp;
    while(current != NULL){
        index = current->next;
        while(index != NULL){
            if(current->data > index->data){
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
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

	one->data = 5;
	two->data = 4;
	three->data = 2;
	four->data = 3;
	five->data = 1;

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
	five->next = NULL;

	head = one;

    display(head);
    
    printf("\n");

    Sort_Linked_List(head);

    display(head);

    return 0;
}