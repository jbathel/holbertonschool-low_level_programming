#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array passed by main
 * @c: char
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	while (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
