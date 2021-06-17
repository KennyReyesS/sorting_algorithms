#include "sort.h"

/**
 * _swap - function to swap two elements.
 * @n1: first element to swap.
 * @n2: second element to swap.
 */

void _swap(int *n1, int *n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * partition - Split the array and takes the last element as pivot
 * @array: Array
 * @low: first element
 * @high: last element
 * @size: Size of the array.
 * Return: i
 **/

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{

			_swap(&array[i], &array[j]);


			if (i != j)
				print_array(array, size);

			i++;

		}
	}

	_swap(&array[i], &array[high]);
	if (i != j)
		print_array(array, size);

	return (i);
}

/**
 * quick_recursion - quicksort in recursion
 * @array: array
 * @low: first element
 * @high: last element
 * @size: Size of the array.
 * Return: Nothing
 */
void quick_recursion(int *array, int low, int high, size_t size)
{

	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		quick_recursion(array, low, i - 1, size);
		quick_recursion(array, i + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: array
 * @size: size of the array.
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_recursion(array, 0, size - 1, size);
}
