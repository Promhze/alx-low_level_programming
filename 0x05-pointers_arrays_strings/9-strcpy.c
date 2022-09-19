#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - main function to copy
 * @dest: destination to copy
 * @src: src
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c <= _strlen(src); c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
