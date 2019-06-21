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

for (c = 'a' ; c < 'z' ; c++)
{
putchar (c);
}
for (ch = 'A' ; ch < 'Z' ; ch++)
{
putchar (ch);
}
putchar ('\n');
return (0);
} 
