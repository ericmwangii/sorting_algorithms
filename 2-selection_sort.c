#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{

size_t i, j, y;

for (i = 0; i <= size; i++)
{
	y = i;
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[y])
			y = j;
	}
	if (y != i)
	{
		swap_int(array, i, y);
		print_array(array, size);
	}
}

}

/**
 * swap_int - swap variables
 * @array: array
 * @a: index 1
 * @b: index 2
*/
void swap_int(int *array, size_t a, size_t b)
{
int tmp;
tmp = array[a];
array[a] = array[b];
array[b] = tmp;
}
