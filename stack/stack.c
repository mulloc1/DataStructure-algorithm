#include "stack.h"

#define STACK_SIZE 5

struct node {
	element item;
	struct node * link;
};

int cnt;
struct node * top;

void push(element item)
{
	struct node * temp;

	if (cnt >= STACK_SIZE){
		printf("stack over flow\n");
	}
	else{
		if (top == 0){
			top = (struct node*)malloc(sizeof(struct node));	
			top->item = item;
			cnt++;
		}
		else{
			temp = (struct node*)malloc(sizeof(struct node));	
			temp->link = top;
			top = temp;
			top->item = item;
			cnt++;
		}

	}
}
element pop()
{
	element item;
	struct node * temp;
	if (top == 0){
		printf("stack is empty\n");
		item = -1;
	}
	else{
		temp = top;
		top = temp->link;
		item = temp->item;
		free(temp);
	}
	return item;
}

element peek()
{
	return top->item;
}
