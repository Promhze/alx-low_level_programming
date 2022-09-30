#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Return:  will return a pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *nice, *check;

	while (*haystack)
	{
		nice= haystack;
		check = needle;
		while (*haystack && *check && *haystack == *check)
		{
			haystack++;
			check++;
		}
		if (!*check)
		{
			return (nice);
		}
		else
		{
			haystack = nice + 1;
		}
	}
	return (NULL);
}
Footer

