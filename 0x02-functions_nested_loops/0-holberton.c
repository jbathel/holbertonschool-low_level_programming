#include "holberton.h"
/**
 * main - entry point
 *
 * Description: This program will
 * print "Holberton".
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[] = "Holberton";
int b;

	for (b = 0; b < 10; b++)
	_putchar (a[b]);
	_putchar ('\n');
return (0);
}
