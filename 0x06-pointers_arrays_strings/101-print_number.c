#include "main.h"

/**
 * print_number -this function will print an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, b, num;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	num = 1;

	while (b > 9)
	{
		b /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((a / num) % 10) + 48);
	}
}
