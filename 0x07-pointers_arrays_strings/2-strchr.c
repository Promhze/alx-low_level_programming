#include "main.h"
#include <stdio.h>

/**
 * _strchr - will find a character
 * @s: input string
 * @c: takes in a character
 *
 * Return: returns a pointer to the 1st occurrence of char c else return null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
