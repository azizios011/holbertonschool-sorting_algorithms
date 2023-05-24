#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* Flag to check if any swap occurs in the inner loop */
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			/* If current element is greater than the next element, swap them */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}

		/* If no swap occurred in the inner loop, the array is already sorted */
		if (swapped == 0)
			break;
	}
}
