#include "main.h"

/**
 * _strlen - will return the lenth of the code
 *
 * @s: string character
 * Return: will return the length
 */

int _strlen(char *s)
{
	int num;
	for (num = 0; s[num] ! = '\0'; num++)
	{}
	return (num);
}
