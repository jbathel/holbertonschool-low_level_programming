#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 * using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;

	for (a = 97; a <= 102; a++)
	{
	putchar(a);
	}
	putchar('\n');
return (0);
}
