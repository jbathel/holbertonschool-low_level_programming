#include "sort.h"

/**
 * quick_sort - Function that sorts an array based on
 * quick sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	print_sort(array, size, 1);

	/*only sort if it could make a difference*/
	if (size < 2)
		return;

	/* partition and get pivot index */
	pivot = partition(array, size);

	/* repeat for left of index */
	quick_sort(array, pivot);
	/* repeat for index and right */
	quick_sort(array + pivot, size - pivot);
}

/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * partition - Function that sets the pivot for quick_sort
 *
 * @array: Array that will be sorted
 * @low: First element
 * @high: Last element
 * Return: (i + 1)
 */
size_t partition (int array[], size_t size)
{
	int pivot = array[size - 1];
	size_t i = - 1;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_sort(array, size, 0);
			}
		}
	}
	if (i + 1 != size - 1)
	{
		swap(&array[i + 1], &array[size - 1]);
		print_sort(array, size, 0);
	}
	return (i + 1);
}

/**
 * print_sort - Function that prints as it should
 * @array: Array to be printed
 * @size: Size of array
 * Return: 0
 */
void print_sort(int array[], size_t size, int init)
{
	static int *p = NULL;
	static size_t s;

	if (!p && init)
	{
		p = array;
		s = size;
	}
	if (!init)
		print_array(p, s);
}
