#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int number = 0, a, b;
	char *str, num;

	while (number >= 0)
	{
		if (s[number] == '\0')
			break;
		number++;
	}
	str = s;

	for (a = 0; a < (number - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			num = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = num;
		}
	}
}
