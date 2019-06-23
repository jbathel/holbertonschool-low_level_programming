#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all possible combinations
 * of single-digit numbers, followed by a new line
 * using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

	for (digit = 48; digit <= 57; digit++)
	{
	putchar(digit);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
return (0);
}
