#include "main.h"

/**
 * puts2 - prints one char
 * @str: input string
 */

void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
}

