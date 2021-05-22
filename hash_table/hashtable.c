#include "hashtable.h"
#include "hashcode.h"

int insert(struct node * arr, char * key, element value)
{
	int hashcode = get_hashcode(key);
	int index = indexing(hashcode, TABLE_SIZE);
	int result = 1;
	struct node * temp = arr;

	if ( *(arr+index) == 0 ) {
		*(arr+index) = (struct node*)malloc(sizeof(struct node));
		
		if (*(arr+index) == 0) 
			result = 0;

		arr+index->value = value;
	}
	else {	
		while (temp->link != 0){
			temp = temp->link;
		}
		temp->link = (struct node*)malloc(sizeof(struct node));
		
		if (temp->link == 0)
			result = 0;
	
		temp = temp->link;
		temp->value = value;
	}
}

element search(char * key);

int del(char * key);
