#include "main.h"

/**
 * _strcpy - copy a string into another location
 * @dest: destination
 * @source: the sourc
 */

char *_strcpy(char, *dest, char, *src)
{
	int num = 0;

	while (num >= 0)
	{
		*(dest + num) = *(src + num);
		if (*(src + num) == '\0')
		{
			break;
		}
		num++;
	}
	return (dest);
}
