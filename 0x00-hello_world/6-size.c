#include<stdio.h>

/**
 * main - entry point
 *
 * Description: Prints size of various types
 * on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%d\n", "Size of a char:" sizeof(char));
printf("%d\n", "Size of an int:" sizeof(int));
printf("%d\n", "Size of a long int:" sizeof(long int));
printf("%d\n", "Size of a long long int:" sizeof(long long int));
printf("%d\n", "Size of a float:" sizeof(float));
return (0);
}
