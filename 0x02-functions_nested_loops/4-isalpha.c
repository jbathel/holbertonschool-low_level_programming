#include "holberton.h"
/**
 * _isalpha - calls function
 *
 * Description: Checks to see if char is
 * uppercase or lowercase.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
