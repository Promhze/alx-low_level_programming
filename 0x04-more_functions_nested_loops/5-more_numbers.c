#include "main.h"

/**
 * more_numbers - prints certina range of numbers
 *
 */

void more_numbers(void)
{
	int b
	int a;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 10)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
	}
}
