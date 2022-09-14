#include "main.h"

/**
 * _islower - main entey point
 *
 * @c: charcater set
 *
 * Return: return 1 if 'c' is lowercase
 * otherwise always return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
