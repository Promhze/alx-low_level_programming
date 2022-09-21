#include "main.h"

/**
 * string_toupper - change lowercase
 * @x: character
 * Return: returns an upper char
 */

char *string_toupper(char *x)
{
	int c = 0;

	while (x[c])
	{
		if (x[c] >= 97 && x[c] <= 122)
		{
			x[c] = x[c] - 32;
		}
		c++;
	}
	return (x);
}
