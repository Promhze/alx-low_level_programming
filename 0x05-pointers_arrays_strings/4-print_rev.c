#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: takes in string input
 */

void print_rev(char *str)
{
	int c, len = strlen(str);

	for (c = len - 1; c >= 0; c--)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
