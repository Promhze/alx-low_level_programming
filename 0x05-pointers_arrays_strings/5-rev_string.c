#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int a;
	char h;

	for (a = 0; a < _strlen(s) / 2; a++)
	{
		h = s[a];
		s[a] = s[_strlen(s) - a - 1];
		s[_strlen(s) - a - 1] = h;
	}
}
