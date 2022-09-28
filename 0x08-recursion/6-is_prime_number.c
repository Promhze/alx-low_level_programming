#include "main.h"

/**
 * is_prime_number - this code will display a prime number
 * @i: input int i
 * @j: input int j
 * Return: boolean val of the state of inputs
 */

int is_prime_number(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

 /**
  * is_prime_number - printing prime numbers
  * @n: input integer value
  *
  * Return: returns the state of the inout value
  */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
