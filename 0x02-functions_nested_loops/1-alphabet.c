#include "main.h"

/**
 * print_alphabet - this prints the alphabeth
 *
 * Return: always return 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

