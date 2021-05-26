#include "sort.h"

void bubble_sort(int *nums, int size)
{
	int i, j, z, temp;

	for (i=0; i<size-1; i++){
		for (z=size-1, j=z-1 ; z>=1; j--, z--){
			if (*(nums+j) > *(nums+z)){
				temp = *(nums+j);
				*(nums+j) = *(nums+z);
				*(nums+z) = temp;
			}
		}
	}
}

void insert_sort(int * nums, int size)
{
		
}

void choice_sort(int * nums, int size)
{
	int i, j, min, temp;

	for (i=0; i<size; i++){
		min = i;
		for(j=i+1; j<size; j++){
			if (*(nums+min) > *(nums+j)){
				min = j;
			}
		}
		if (i != min){
			temp = *(nums+min);
			*(nums+min) = *(nums+i);
			*(nums+i) = temp;
		}
	}
}
