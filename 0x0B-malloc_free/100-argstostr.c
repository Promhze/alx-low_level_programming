#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: input params
 * @av: input params
 *
 * Return: nothing.
 */

char *argstostr(int ac, char **av)
{
	int b, c, v = 0;
	int len = 1;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			len += 1;
		}
		len += 1;
	}
	str = malloc(sizeof(char) * len);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			str[v] = av[b][c];
			v++;
		}
		str[v] = '\n';
		v++;
	}
	str[v] = '\0';

	if (str != NULL)
	{
		return (str);
	}
	else
	{
		return (NULL);
	}
}
