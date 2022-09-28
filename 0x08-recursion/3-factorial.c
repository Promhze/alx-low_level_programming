#include "main.h"

/**
 * factorial - will print the factorial of a number
 * @n: input number
 *
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
