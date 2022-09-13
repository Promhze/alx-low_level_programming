#include "main.h"

/**
 * print_alphabet - displays the ouput
 *
 * Return: returns nothing or void
 */

void print_alphabet(void)
{
	char alphabeth = 'a';

	while (alphabeth <= 'z')
	{
		_putchar(alphabeth);
		alphabeth++;
	}
	_putchar('\n');
}
