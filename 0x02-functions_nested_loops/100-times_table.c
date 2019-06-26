#include "holberton.h"

/**
  * print_times_table - calls function
  * @n: variable to be tested
  * Description: Function that outputs times
  * tables if n is less than 15.
  */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int c = b * a;

			print (c);
		}
		_putchar ('\n');
	}
}

