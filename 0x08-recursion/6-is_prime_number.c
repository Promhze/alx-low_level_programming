#include "main.h"
/**
 * alx - program with the sauce
 * @a:  ist input
 * @c: 2nd input
 * Return: value
 */
int alx(int a, int c)
{
	if (c % a == 0 && c != a)
		return (0);
	if (c % a != 0 && a < c)
		return (helper(a + 1, c));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (alx(a, c));
}
