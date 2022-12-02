#include<stdio.h>
#include<stdlib.h>

struct boo {
	int number;
	struct boo *next;
};

void Print(struct boo *p){
	while(p != NULL){
		printf("%d -->", p->number);
		p = p -> next;
	}
}

struct boo* Insert_Start(struct boo *head, int data){
	struct boo *insert = malloc(sizeof(struct boo));
	insert->number = data;
	insert->next = NULL;

	insert->next = head;
	head = insert;

	return head;
}

void Insert(struct boo *head, int data, int pos){
	struct boo *ptr = head;
	struct boo *p2 = malloc(sizeof(struct boo));
	p2->number = data;
	p2->next = NULL;
	int i = 0;
	while(i < pos - 1){
		ptr = ptr -> next;
		i++;
	}

	p2->next = ptr->next;
	ptr->next = p2;
}

struct boo* Insert_Last(struct boo *head, int data){
    struct boo *p = head;
    struct boo *ptr = malloc(sizeof(struct boo));
    ptr->number = data;
    ptr->next = NULL;

    while(1){
        p = p -> next;
        if(p->next == NULL){
            break;
        }
    }
    p->next = ptr;
    return head;
}

int main(){
	struct boo *head;
	struct boo *one;
	struct boo *two;
	struct boo *three;
	struct boo *four;
	struct boo *five;

	one = malloc(sizeof(struct boo));
	two = malloc(sizeof(struct boo));
	three = malloc(sizeof(struct boo));
	four = malloc(sizeof(struct boo));
	five = malloc(sizeof(struct boo));

	one->number = 1;
	two->number = 2;
	three->number = 3;
	four->number = 4;
	five->number = 5;

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
	five->next = NULL;

	head = one;

	printf("Before insertion : \n");
	Print(head);

	printf("\nAfter insertion(in the middle) : \n");
	
	Insert(head, 5, 3);
	head = Insert_Start(head, 100);
	Insert_Last(head, 500);
	Print(head);

	return 0;
}


