#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - a struct with information about dog and owner
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Description: Struct with dog name, dog age, and owner name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* HOLBERTON_H */
