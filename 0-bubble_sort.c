#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using Bubble sort
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int skip, i, temp, swapped = 1;

	for (skip = size - 1; skip >= 0 && swapped; skip--)
	{
		swapped = 0;
		for (i = 0; i <= skip - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
