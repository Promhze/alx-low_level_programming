#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first input char
 * @s2: second input char
 *
 * Return: character count
 */

int _strcmp(char *s1, char *s2)
{
	int a, compare;

	for (a = 0; s1[a] != '\0'; ++a)
	{
		if (s1[a] > s2[a])
		{
			compare = s1[a] - s2[a];
			return (compare);
		}
		else if (s1[a] < s2[a])
		{
			compare= s1[a] - s2[a];
			return (compare);
		}
	}
	return (0);
}
