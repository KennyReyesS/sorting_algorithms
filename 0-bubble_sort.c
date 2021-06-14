#include "sort.h"

/**
 * _swap - function to swap two elements.
 * @n1: first element to swap.
 * @n2: second element to swap.
 */

void _swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be printed.
 * @size: Size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				_swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
