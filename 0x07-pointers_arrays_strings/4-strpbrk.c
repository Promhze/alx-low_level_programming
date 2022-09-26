#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string
 * @s: input string
 * @accept: accepted string
 *
 * Return: resturns accepted string
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, calclen, answer = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		continue;
	}
	calclen = a;
	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (accept[a] == s[b])
			{
				if (a <= calclen)
				{
					calclen = b;
					answer = 1;
				}
			}
		}
	}
	if (answer == 1)
	{
		return (&s[calclen]);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
