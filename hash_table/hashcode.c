#include "hashcode.h"

int get_hashcode(char * key)
{
	int i=0, hashcode=0;
	for (i; i<sizeof(key); i++){
		hashcode += (int)*(key+i);
	}
	return hashcode;
}

int indexing(int hashcode, int hashtable_size)
{	
	int index = hashcode % hashtable_size;
	return index; 
}
