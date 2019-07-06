#include "holberton.h"
/**
 * *_strncat - calls function
 * @dest: string out
 * @src: pointer to array
 * @n: integer
 * Description: Write a function that concatenates two strings.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*tmp)
	{
		tmp++;
	}
	for (n 0 ; n < n && *src != '\0' ; n++)
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	return (dest);
}
