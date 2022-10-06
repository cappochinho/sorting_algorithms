#include "sort.h"

/**
 * selection_sort - sorts an array using Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;
	
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}