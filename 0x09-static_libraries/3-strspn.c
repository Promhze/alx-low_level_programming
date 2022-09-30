#include "main.h"

/**
 * _strspn - gets length of a substring
 * @s: input string
 * @accept: accepted characters
 *
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a= 0; s[a]; a++)
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
}
