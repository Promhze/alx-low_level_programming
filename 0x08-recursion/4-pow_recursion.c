#include "main.h"
#include "math.h"

/**
 * _pow_recursion - returns the power of x to the power of y
 * @x: input x value
 * @y: input y value
 *
 * Return: returns the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
