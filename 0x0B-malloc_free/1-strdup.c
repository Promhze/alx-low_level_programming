#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates space in memory
 * @str: will take in a string input
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{
	char *duplicate_num;
	int a = 0, len = 0;

	duplicate_num = malloc(sizeof(char) * (len + 1));
	if (str == 0 || duplicate_num == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		duplicate_num[a] = str[a];
		len++;
	}
	duplicate_num[len] = '\0';
	return (duplicate_num);
}
