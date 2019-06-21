#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	n = n % 10;

	printf("%d ", n);

	if (n > 5)
	{
	printf("and if greater than 5");
	}
	if (n == 0)
	{
	printf("and is 0");
	}
	if (n < 6 && n != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
return (0);
}
