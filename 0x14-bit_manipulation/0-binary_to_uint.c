include "holberton.h"
/**
  * binary_to_uint - Function that converts a binary number
  * to an unsigned int
  * @b: pointer to a string of 0 and 1 chars"
  * Return: the converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = (i * 2) + (*b - '0');
		b++;
	}
	return (i);
}
