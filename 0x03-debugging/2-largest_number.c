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
	int num;

	if (a > b && a > c)
	{
		num = a;
	}
	else if (b > a && b > c)
	{
		num = b;
	}
	else
	{
		num = c;
	}
	return (num);
}


