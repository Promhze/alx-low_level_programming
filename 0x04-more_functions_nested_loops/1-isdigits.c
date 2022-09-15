#include "main.h"

/**
 * _isdigit - this checks the digit from 0-9
 * @c: input to be used
 *
 * Return: return either 1 or 0 after testing
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
