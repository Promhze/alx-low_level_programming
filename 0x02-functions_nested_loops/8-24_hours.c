#include "main.h"

/**
 * jack_bauer - pribt the minute of the day
 * i: acts as interger
 * j: acts as second interger
 *
 * Returns: always returns 0
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j = 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_puitchar('\n');
		}
	}
}
