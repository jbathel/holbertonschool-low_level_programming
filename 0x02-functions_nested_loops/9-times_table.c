#include "holberton.h"

/**
 * times_table - calls function
 * Description: A function that prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if (col)
			_putchar (',');
			_putchar (' ');
			_putchar ('0' + (row * col) / 10);
			_putchar ('0' + (row * col) % 10);
		}
		_putchar('\n');
	}
}
