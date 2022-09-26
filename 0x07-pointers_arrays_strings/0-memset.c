#include "main.h"

/**
 * _memset - memory allocation to be filled
 * @s: takes in a string input
 * @b: character toinput
 * @n: size of elements
 *
 * Return: will return a pointer 
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
