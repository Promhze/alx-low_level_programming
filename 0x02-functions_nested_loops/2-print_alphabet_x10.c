#include "main.h"

/**
 * print_alphabet_x10 - prints the output
 *
 * Return always 0;
 */

void print_alphabet_x10(void)
{
	char c;
	char b;

	for (c = 0; c <= 9; c++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
}
