#include<stdio.h>
#include<stdlib.h>

struct stack{
	int items[5];
	int top;
};
typedef struct stack st;

int IsFull(st *s){
	if(s->top == 5 - 1){
		return 1;
	}
	else{
		return 0;
	}
}

int IsEmpty(st *s){
	if(s->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

void CreateEmptyStack(st *s){
	s->top = -1;
}

void Add(st *s, int data){
	if (IsFull(s))
	{
		printf("Stack full");
	}
	else{
		s->top++;
		s->items[s->top] = data;
	}
}

void Remove(st *s){
	if (IsEmpty(s))
	{
		printf("Stack Empty");
	}
	else{
		printf("Item removed -> %d", s->items[s->top]);
		s->top--;
	}
	printf("\n");
}

void PrintStack(st *s){
	int i;
	for (i = 0; i <= s->top; i++)
	{
		printf("%d ", s->items[i]);
	}
	printf("\n");
}

int main(){
	st *newStack;
	newStack = (st *)malloc(sizeof(st));

	CreateEmptyStack(newStack);

	Add(newStack, 1);
	Add(newStack, 2);
	Add(newStack, 3);
	Add(newStack, 4);
	Add(newStack, 5);

	PrintStack(newStack);

	Add(newStack, 6);

	Remove(newStack);
	printf("\n");
	printf("After removing");
	PrintStack(newStack);
}