#include "main.h"

/**
 * print_numbers - will display numbers 0-9
 *
 * Return: returns nothing or void
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c >= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
