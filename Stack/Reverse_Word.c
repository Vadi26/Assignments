#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
	char word[6];
	int top;
};
typedef struct stack st;

int IsFull(st *s){
	if(s->top == 6 - 1){
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

void Add(st *s, char letter){
	if (IsFull(s))
	{
		printf("Stack full");
	}
	else{
		s->top++;
		s->word[s->top] = letter;
	}
}

char* Remove(st *s){
	if (IsEmpty(s))
	{
		printf("Stack Empty");
	}
	else{
		s->top--;
        printf("\n");
        return s->word[s->top];
	}
}

void PrintStack(st *s){
	int i;
	for (i = 0; i <= s->top; i++)
	{
		printf("%c", s->word[i]);
	}
	printf("\n");
}

int main(){
    st *Reverse;
    Reverse = (st *)malloc(sizeof(st));
    CreateEmptyStack(Reverse);
    char word[6];
    printf("Enter the word u want to reverse : \n");
    fgets(word, 6, stdin);
    printf("The entered word is : ");
    PrintStack(Reverse);
    for (int i = 0; i < 5; i++)
    {
        Add(Reverse, word[i]);
    }
    PrintStack(Reverse);
    int i = 0;
    printf("The reversed word is : \n");
    while (Reverse->top != -1)
    {
        strcpy(word[i], Remove(Reverse));
        i++;
    }
    printf("%s", word);

    return 0;
}