#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: returns a string
 */

char *_strcat(char *dest, char *src)
{
	int num = 0, i;

	while (dest[num])
	{
		num++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[num] = src[i];
		num += 1;
	}
	dest[num] = ('\0');
	return (dest);
}
