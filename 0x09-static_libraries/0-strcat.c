#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (c = 0; src[c] != '\0'; ++c, ++len)
	{
		dest[len] = src[c];
	}
	dest[len] = '\0';
	return (dest);
}
