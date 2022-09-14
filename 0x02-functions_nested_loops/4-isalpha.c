#include "main.h"

/**
 * _isalpha - test for alphabetic  characters
 * @c: this are the characters to be checked
 *
 * Return: 1 for alphabeths or 0 for anythibg ekse
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
