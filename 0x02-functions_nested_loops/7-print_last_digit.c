#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - this prints the last digit
 *@n: sets the vakue if the number
 *
 * Return: returns 0
 */

int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
