#include "main.h"

/**
 * _memset - fills the memory with a byte
 * @s: input string
 * @b: input character
 * @n: input size
 *
 * Return: returns a pointer to address s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
