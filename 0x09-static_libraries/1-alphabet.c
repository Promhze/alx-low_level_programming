#include "main.h"

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * return (0)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
