#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @str: input string
 */

void rev_string(char *str)
{
	int a = strlen(str) - 1, c = 0;
	char high;

	while (a > c)
	{
		high = str[i];
		str[a] = str[c];
		str[c] = high;
		a--;
		c++;
	}
}
