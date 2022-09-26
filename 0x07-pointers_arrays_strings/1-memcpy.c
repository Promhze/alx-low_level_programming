#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: acts as the input for destination
 * @src: ource
 * @n: input integer
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
