#include "main.h"

/**
 * cap_string - capitalises a string
 * @x: character
 * Return: returns a character
 */
char cap_string(char *x)
{
	char sp[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	int len = 13;
	int a = 0, c;

	while x[c]
	{
		c = 0;

		while (c < len)
		{
			(a == 0 || s[a-1] == spc[c]) && (s[a] >= 97 && s[a] <= 122)				s[a] = s[a] - 32;
		}
		c++;
	}
	return (x);
}