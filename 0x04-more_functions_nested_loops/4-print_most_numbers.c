#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
}


