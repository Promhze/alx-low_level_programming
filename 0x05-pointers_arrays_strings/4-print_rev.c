#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string in reverse order
 * @s: takes in string input
 */

void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
