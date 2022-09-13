#include "main.h"

/**
 * print_alphabet - displays the ouput
 *
 * Return: returns nothing or void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
