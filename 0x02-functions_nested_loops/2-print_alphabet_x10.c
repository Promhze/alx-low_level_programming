#include "main.h"

/**
 * print_alphabet_x10 - prints the output
 *
 * Return always 0;
 */

void print_alphabet_x10(void)
{
	int e;
	char d;

	for (e = 0; e < 10; e++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
