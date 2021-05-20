#include "queue.h"

int main()
{
	element item;
	int menu;

	while(1){
		printf("\n1. enqueue\n2. dequeue\n3. peek\n4. exit\n: ");
		scanf("%d", &menu);

		switch(menu){
			case 1:
				printf("item : ");
				scanf("%d", &item);
				enqueue(item);
				break;
			case 2:
				printf("%d", dequeue());
				break;
			case 3:
				printf("%d", peek());
				break;
			case 4:
				return 0;
			default:
				printf("잘못된 입력입니다.\n");
		}
	}
}
