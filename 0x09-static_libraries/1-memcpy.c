#include "main.h"

/**
 * _memcpy - copies memory from src to dest
 * @dest: input destinations
 * @src: input source
 * @n: input integer
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
