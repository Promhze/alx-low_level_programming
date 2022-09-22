#include "main.h"

/**
 * rot13 - encrypts code
 * @s: string character
 * Return: a character
 */

char *rot13(char *s)
{
	char letterOne[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char letterTwo[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letterOne[b] != '\0'; b++)
		{
			if (s[a] == letterOne[b])
			{
				s[a] = letterTwo[b];
				break;
			}
		}
	}
	return (s);
}
