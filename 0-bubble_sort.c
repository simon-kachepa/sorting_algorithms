#include "sort.h"

/**
 * swap_elements - Function that swaps 2 elements
 * @array: The array of integers
 * @i: The index of the first element
 * @j: The index of the second element
 * Return: Nothing (void)
 */
void swap_elements(int *array, size_t i, size_t j)
{
	size_t tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array of integers
 * @size: The size of the array
 * Return: Nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t sorted_el, index;

	for (sorted_el = 0; sorted_el < size - 1; sorted_el++)
	{
		for (index = 0; index < size - sorted_el - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap_elements(array, index, index + 1);
				print_array(array, size);
			}
		}
	}
}
