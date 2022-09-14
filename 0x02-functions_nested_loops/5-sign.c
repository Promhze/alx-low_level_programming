#include "main.h"

/**
 * print_sign - this orints the sign of a number
 * @n: the mumver to be checked
 * Return: 1 if number is positive, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
