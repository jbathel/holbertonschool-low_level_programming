#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - calls function
 *
 *
 * Description: Function that prints all natural numbers from
 * n to 98, follwed by a newline.
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		for (; i <= 98; i++)
		{
			if (i < 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (; i >= 98; i--)
			printf("%d, ", i);
	}
	else
		printf("98\n");
	return;
}
