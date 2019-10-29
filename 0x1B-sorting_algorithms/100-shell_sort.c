#include "sort.h"

/**
 * shell_sort - Sorts an array using the Knuth sequence
 * and shell sort
 * @array: array to be sorted
 * @size: size of array
 * Return: 0
 */
void shell_sort(int *array, size_t size)
{
	unsigned int inner, outer;
	int valueToInsert;
	size_t interval = 1;
	int i = 0;

	if (!array)
		return;

	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			valueToInsert = array[outer];
			inner = outer;

			while (inner > interval - 1 && array[inner - interval]
					>= valueToInsert)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}

			array[inner] = valueToInsert;
		}

		interval = (interval - 1) / 3;
		i++;
		print_array(array, size);

	}
}
