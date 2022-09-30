#include "main.h"

/**
 * print_array - print array
 * @dest: character pointer
 * @src: character source
 *
 * Return: return pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
