#include "main.h"

/**
 * _isupper - this checks for uppercase chsr
 * @c: input to be tested
 *
 * Return: always return 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

