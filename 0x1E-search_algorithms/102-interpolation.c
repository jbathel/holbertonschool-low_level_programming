#include "search_algos.h"
/**
 * interpolation_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, pos = 0;
	int high = (size - 1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%d] = [%d]\n", (int)high, array[high]);
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
			if (array[pos] == value)
				return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high= pos - 1;
	}
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", (int) pos);
	return -1;
}
