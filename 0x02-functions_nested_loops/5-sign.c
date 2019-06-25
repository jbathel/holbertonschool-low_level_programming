#include "holberton.h"
/**
 * print_sign - calls function
 *
 * Description: Prints the sign of
 * a number.
 * Return: Always 0 (Success)
 */
int print_sign (int n)
{
	if(n >= '1' && n <= '9')
	_putchar('+');
	return (1);
	else if(n >= '-9' && n <= '-1')
	_putcar('-');
	return ('-1');
	else
	_putchar('0');
	return (0);
}
