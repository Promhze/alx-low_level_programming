#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: takes the string input
 */

void puts_half(char *str)
{
	int a;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (a = (_strlen(str) + oE) / 2; a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
