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
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array.
 * @size: Size of the array.
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		_swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
