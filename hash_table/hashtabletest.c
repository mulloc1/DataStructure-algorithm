#include "hashcode.h"
#include "hashtable.h"

int main()
{
	struct node table[TABLE_SIZE];

	printf("%d\n", insert( table[0] , "korea", 100));

	return 0;
}
