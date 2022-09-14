#include "main.h"

/**
 * _isalpha - test for alphabetic  characters
 * @c: this are the characters to be checked
 *
 * Return: 1 for alphabeths or 0 for anythibg ekse
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
	{
		return (1);
	}

	return (0);
}
