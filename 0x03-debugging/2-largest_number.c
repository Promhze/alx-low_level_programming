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

	if (a > b)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = a;
	}
	return (largest);
}


