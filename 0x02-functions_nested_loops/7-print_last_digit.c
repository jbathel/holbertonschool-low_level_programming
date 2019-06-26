#include "holberton.h"
/**
 * print_last_digit - calls function
 * @r: Integer to be computed
 * Description: Function that prints the
 * last digit of number.
 * Return: 0
 */
int print_last_digit(int r)
{
int n;

if (r < 0)
{
r = r * -1;
}
n = r % 10;
_putchar('0' + n);
return (n);
}
