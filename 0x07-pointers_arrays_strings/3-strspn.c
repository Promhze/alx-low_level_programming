#include "main.h"

/**
 * _strspn - length of the string
 * @s: input string
 * @accept: accepted characters
 *
 * Return: will return the total number of bytes of s
 * consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (!accept[b])
		{
			break;
		}
	}
	return (a);
