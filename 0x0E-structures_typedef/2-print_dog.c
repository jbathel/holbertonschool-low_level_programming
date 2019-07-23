#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * init_dog - calls function
 * @d: struct name
 * Description: Function that prints a struct dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name = %s\nAge = %g\nOwner = %s\n", d->name, d->age, d->owner);
	return;
}
