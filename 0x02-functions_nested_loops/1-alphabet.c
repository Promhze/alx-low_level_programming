#include "main.h"

/**
 * print_alphabet - displays the ouput
 *
 * Return: returns 0
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
