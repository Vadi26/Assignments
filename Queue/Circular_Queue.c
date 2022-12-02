#include<stdio.h>

#define SIZE 5

int queue[SIZE], FRONT = -1, REAR = -1;

int IsFull(){
	if((REAR == SIZE - 1 && FRONT == 0) || FRONT == REAR + 1){
		return 1;
	}
	else
		return 0;
}

int IsEmpty(){
	if(FRONT == -1 && REAR == -1){
		return 1;
	}
	else
		return 0;
}

void Enqueue(int data){
	if(IsFull()){
		printf("Queue is full. Try Resetting the queue.");
	}
	else{
		if(FRONT == -1){
			FRONT++;
			REAR++;
			queue[REAR] = data;
			printf("FRONT = %d, REAR = %d\n", FRONT, REAR);
			return;
		}

		if(REAR == SIZE - 1){
			REAR = 0;
			queue[REAR] = data;
		}
		else if(REAR < SIZE){
			REAR++;
			queue[REAR] = data;
		}
	}
	printf("FRONT = %d, REAR = %d\n", FRONT, REAR);
}

void Dequeue(){
	if(IsEmpty()){
		printf("The queue is empty.");
	}

	else{
		printf("The removed element is : %d\n", queue[FRONT]);
		if(FRONT == SIZE - 1)
			FRONT = 0;
		else
			FRONT++;
	}
	printf("FRONT = %d, REAR = %d\n", FRONT, REAR);
}

void PrintQueue(){
	if (FRONT <= REAR)
	{
		for(int i = FRONT; i <= REAR; i++){
		printf("%d ", queue[i]);
		}
	}
	else{
		for(int i = 0; i <= SIZE - 1; i++){
		printf("%d ", queue[i]);
	}
	}
}

void newline(){
	printf("\n");
}

int main(){
	Enqueue(1);
	PrintQueue();
	newline();
	Enqueue(2);
	PrintQueue();
	newline();
	Enqueue(3);
	PrintQueue();
	newline();
	Enqueue(4);
	PrintQueue();
	newline();
	Enqueue(5);
	PrintQueue();
	newline();

	Dequeue();
	PrintQueue();
	newline();
	Dequeue();
	PrintQueue();
	newline();

	Enqueue(6);
	PrintQueue();
	newline();
	Enqueue(7);
	PrintQueue();
	newline();
	Enqueue(8);

	return 0;
}

