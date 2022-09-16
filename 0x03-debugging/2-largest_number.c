#include "main.h"

/**
 * largest_number - displays output
 * @a: takesin the first interger
 * @b:takes in second interger
 * @c: takes in third interger
 * Return: always zero
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}


