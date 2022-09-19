#include "main.h"

/**
 * _strlen - will return the lenth of the code
 *
 * @s: string character
 * Return: will return the length
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
