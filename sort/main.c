#include "sort.h"
#include <stdio.h>

int main(void)
{

	int nums[5] = { 5, 4, 3, 2, 1 };
	int i;

	//bubble_sort(nums, sizeof nums);
	choice_sort(nums, sizeof(nums) / sizeof(int));
	for (i=0; i<5; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");

	return 0;
}
