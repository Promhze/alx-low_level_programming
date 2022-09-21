 #include "main.h"
#include <string.h>

/**
 * _strncpy - copys s string
 * @dest: firstparameter
 * @src: second parameter
 * @n: third
 * Return: returns a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
