#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string
 * @s: input string
 * @accept: accepted string
 *
 * Return: resturns accepted string
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, len, search = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		continue;
	}
	len = a;
	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (accept[b]== s[a])
			{
				if (b <= len)
				{
					len = b;
					search = 1;
				}
			}
		}
	}
	if (search == 1)
	{
		return (&s[len]);
	}
	else
	{
		return (NULL);
	}
	return (0);
}

