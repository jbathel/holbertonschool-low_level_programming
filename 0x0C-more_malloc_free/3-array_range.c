#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Function that creates an array of integers.
 * @min: minimum int value from main
 * @max: maximum int value from main
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min) + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < max; i++, min++)
		a[i] = min;
	return (a);
}
