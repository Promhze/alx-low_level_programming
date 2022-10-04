#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, a, b;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;
	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;

	while (a < len1)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;

	while (a < (len1 + len2))
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	str[a] = '\0';
	return (str);
}
