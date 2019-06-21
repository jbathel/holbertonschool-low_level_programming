#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabet in lower
 * then upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char ch;

for (c = 65 ; c < 91 ; c++)
{
putchar (c);
}
for (ch = 97 ; ch < 123 ; ch++)
{
putchar (ch);
}
putchar ('\n');
return (0);
} 
