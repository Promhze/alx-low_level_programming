#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a var of struct dog
 * @d: pointer to struct dog
 * @name: first input
 * @age: second input
 * @owner: third input
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
