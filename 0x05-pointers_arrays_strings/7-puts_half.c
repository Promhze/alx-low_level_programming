#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: takes the string input
 */

void puts_half(char *str)
{
	int num = 0, letter = 0, n;

	while (str[num++])
	{
		letter++;
	}
	if ((letter % 2) == 0)
	{
		n = letter / 2;
	}
	else
	{
		n = (letter + 1) / 2;
	}

	for (num = n; num < letter; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
