#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void newline(){
	printf("\n");
}

int IsEmpty(){
	if (front == -1 && rear == -1)
	{
		return 1;
	}
	else
		return 0;
	newline();
}

int IsFull(){
	if (rear == SIZE - 1)
	{
		return 1;
	}
	else
		return 0;
	newline();
}

void EnQueue(int data){
	if (IsFull())
	{
		printf("Queue is full");
	}
	else{
	if (front == -1)
	{
		front++;
		rear++;
		queue[rear] = data;
	}
	else{
		rear++;
		queue[rear] = data;
	}
	}
}

void DeQueue(){
	if (IsEmpty())
	{
		printf("Queue is empty");
	}
	else{
	if (front == rear)
	{
		printf("The removed element is : %d", queue[front]);
		front = -1;
		rear = -1;
	}
	else{
		printf("The removed element is : %d", queue[front]);
		front++;
	}
	}
}

void PrintQueue(){
	for (int i = front; i < rear; i++)
	{
		printf("%d ", queue[i]);
	}
	newline();
}

int main() {
  //deQueue is not possible on empty queue
  	DeQueue();

  //enQueue 5 elements
  	EnQueue(1);
  	EnQueue(2);
  	EnQueue(3);
  	EnQueue(4);
  	EnQueue(5);
	
	newline();
  // 6th element can't be added to because the queue is full
  	EnQueue(6);
	newline();
	PrintQueue();

  //deQueue removes element entered first i.e. 1
  	DeQueue();
	newline();
	

  //Now we have just 4 elements
  	PrintQueue();

  	return 0;
}


// #define LENGTH 5

// struct queue{
// 	int data[LENGTH];
// 	int FRONT;
// 	int REAR;
// };

// typedef struct queue que;

// int IsEmpty(que *q){
// 	if (q->FRONT == -1 && q->REAR == -1)
// 	{
// 		return 1;
// 	}
// 	else {
// 		return 0;
// 	}
// }

// int IsFull(que *q){
// 	if (q->REAR == LENGTH - 1)
// 	{
// 		return 1;
// 	}
// 	else{
// 		return 0;
// 	}
// }

// void Enqueue(que *q, int data){
// 	if (IsFull(q))
// 	{
// 		printf("Queue is full");
// 	}
// 	else{
// 		if (IsEmpty(q))
// 		{
// 			q->FRONT++;
// 			q->REAR++;
// 			q->data[q->REAR] = data;
// 		}
// 		else{
// 			q->REAR++;
// 			q->data[q->REAR] = data;
// 		}
// 	}
// }

// void Dequeue(que *q){
// 	if (IsEmpty(q))
// 	{
// 		printf("Queue is empty");
// 	}
// 	else{
// 		if (q->FRONT == q->REAR)
// 		{
// 			printf("Element removed is : %d", q->data[q->FRONT]);
// 			q->FRONT = -1;
// 			q->REAR = -1;
// 		}
// 		else{
// 			printf("Removed element is : %d", q->data[q->FRONT]);
// 			q->FRONT++;
// 		}
// 	}
// }

// void Print_Queue(que *q){
// 	for(int i = q->FRONT; i < q->REAR; i++){
// 		printf("%d ", q->data[i]);
// 	}
// }

// int main(){
// 	que *First_Queue;
// 	First_Queue = (que *)malloc(sizeof(que));
// 	Enqueue(First_Queue, 1);
// 	Enqueue(First_Queue, 2);
// 	Dequeue(First_Queue);
// 	Enqueue(First_Queue, 3);
// 	Enqueue(First_Queue, 4);
// 	Enqueue(First_Queue, 5);
// 	Enqueue(First_Queue, 6);

// 	Print_Queue(First_Queue);

// 	return 0;
// }
