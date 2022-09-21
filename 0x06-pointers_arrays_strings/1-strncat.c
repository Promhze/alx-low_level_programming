#include "main.h"
#include <string.h>

/**
 * _strncat - concantenates a string
 * @dest: first parameter
 * @src: second parameter
 * @n: interger input
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return(dest);
}
