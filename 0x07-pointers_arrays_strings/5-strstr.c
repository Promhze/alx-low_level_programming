#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Description: locates a substring
 * Return: returns a pointer to the beginning
 * of the located substring, or else, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *cz, *az;

	while (*haystack)
	{
		az = haystack;
		cz = needle;
		while (*haystack && *cz && *haystack == *cz)
		{
			haystack++;
			cz++;
		}
		if (!*cz)
		{
			return (az);
		}
		else
		{
			haystack = az + 1;
		}
	}
	return (NULL);
}
