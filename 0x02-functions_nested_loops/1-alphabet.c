#include "main.h"

/**
 * print_alphabet - displays the ouput
 *
 * Return: returns nothing or void
 */

void print_alphabet(void)
{
	char b = 'a';

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
