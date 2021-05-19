#include "stack.h"

int main()
{
	element item;
	int menu;

	while(1){
		printf("\n1. push\n2. pop\n3. peek\n4. exit\n: ");
		scanf("%d", &menu);

		switch(menu){
			case 1:
				printf("item : ");
				scanf("%d", &item);
				push(item);
				break;
			case 2:
				printf("%d", pop());
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
