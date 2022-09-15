#include "main.h"

/**
 * print_line - prints a line
 * @n: integer to print stuff
 * a: variable input
 */

void print_line(int n)
{
	int a;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}
