#include "main.h"

/**
 * cap_string - capitalises a string
 * @x: character
 * Return: returns a character
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', '', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	int len = 13;
	int a = 0, c;

	while (x[c])
	{
		c = 0;

		while (c < len)
		{
			if ((a == 0 || x[a - 1] == spc[c]) && (x[a] >= 97 && x[a] <= 122))
			{
				x[a] = x[a] - 32;
			}
			c++;
		}
		a++;
	}
	return (x);
}
