#include "hashtable.h"
#include "hashcode.h"

int insert(struct node * arr, char * key, element value)
{
	int result=1, hashcode=0, index=0;
	struct node * temp, * last;

	hashcode = get_hashcode(*key);
	index = indexing(hashcode, TABLE_SIZE);	
	
	if (arr[index] == 0) {
		arr[index] = (struct node*)malloc(sizeof(struct node));

		if (arr[index] == 0)
			result=0;

		arr[index]->value = value;
	}
	else{
		last = arr[index];
		while (last->link != 0) {
			last = last->link;
		}
		
		temp = (struct node *)malloc(sizeof(struct node));
		
		if (temp == 0)
			result=0;

		temp->value = value;
		temp->link = last;
	}

	return result;	
}

element search(char * key);

int del(char * key);
