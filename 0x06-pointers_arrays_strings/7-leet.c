#include "main.h"

/**
 * leet - function
 * @s: parameter s
 * Return: a string
 */

char *leet(char *s)
{
	char arrg[] = "a4A4e3E3o0O0t7T7l1L1";
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; arrg[b] != '\0'; b++)
		{
			if (s[a] == arrg[b])
			{
				s[a] = arrg[b + 1];
				break;
			}
		}
	}
	return (s);
}
