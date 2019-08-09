#include "holberton.h"
/**
 * set_bit
 * @n: integer
 * @index: index
 * Return: 1 if succesful, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
