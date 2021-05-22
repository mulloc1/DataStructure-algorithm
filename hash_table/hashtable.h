#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef int element;

struct node {
	char * key;
	element value;
	struct node * link;
};

int insert(char key[], element value);
element search(char key[]);
int del(char key[]);
