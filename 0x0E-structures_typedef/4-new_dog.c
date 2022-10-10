#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog
 * Return: struct dog else returns null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, Aname, Aowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (Aname = 0; name[Aname]; Aname++)
	{
		;
	}
	for (Aowner = 0; owner[Aowner]; Aowner++)
	{
		;
	}
	p_dog->name = malloc(Aname + 1);
	p_dog->owner = malloc(Aowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < Aname; a++)

		p_dog->name[a] = name[a];
		p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < Aowner; a++)
		p_dog->owner[a] = owner[a];
		p_dog->owner[a] = '\0';
		return (p_dog);
}
