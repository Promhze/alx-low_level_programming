#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: takes the string input
 */

void puts_half(char *str)
{
	int num = 0, c;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			break;
		num++;
		}
		if (num % 2 == 1)
		{
			c = num / 2;
		}
		else
		{
			c = (num - 1) / 2;
		}

		for (c++; c < num; c++)
		{
			_putchar(str[c]);
		}
		_putchar('\n');
	}
}

