#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *free_dog - calls function
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Description: Function that creates a new dog
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	printf("Name = %s\nAge = %g\nOwner = %s\n", d->na
			me, d->age, d->owner);
}
