#include "queue.h"

#define SIZE 5

struct node {
	element item;
	struct node * link;
};

struct node * rear, * front;
int cnt;

void enqueue(element item)
{
	if (cnt >= SIZE)
		printf("queue is full\n");

	if (rear == 0 && front == 0){
		front = (struct node *)malloc(sizeof(struct node));
		rear = front;
		rear->item = item;
		cnt++;
	}
	else{
		rear->link = (struct node *)malloc(sizeof(struct node));
		rear = rear->link;
		rear->item = item;
		cnt++;
	}

}

element dequeue()
{
	struct node * temp;
	element item = -1;

	if (rear == 0 || front == 0) {
		printf("queue is empty\n");	
	}
	else{
		temp = front;
		front = front->link;
		item = temp->item;
		free(temp);
		cnt--;
	}
	return item;
}

element peek()
{
	if (rear == 0 && front == 0){
		printf("queue is empty\n");
		return -1;
	}

	return front->item;	
}
