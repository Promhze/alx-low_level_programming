#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 */

void _puts(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[num]);
		num++;
	}
}
