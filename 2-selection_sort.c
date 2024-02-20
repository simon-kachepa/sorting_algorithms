#include "sort.h"
#include <stdio.h>

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min_pos;
	size_t sorted, solu;

	if (array == NULL || size < 2)
		return;

	for (sorted = 0; sorted < size - 1; sorted++)
	{
		min_pos = array + sorted;
		for (solu = sorted + 1; solu < size; solu++)
			min_pos = (array[solu] < *min_pos) ? (array + solu) : min_pos;

		if ((array + sorted) != min_pos)
		{
			swap_ints(array + sorted, min_pos);
			print_array(array, size);
		}
	}
}
