#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a dogs basic info
 * @name: first memeber
 * @agie: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *strcpy(char *dest,char *src);
int _strlen(char *s);
void free_dog(dog_t, *d);

#endif
