 #include "main.h"
#include <string.h>

/**
 * _strcmp - copys s string
 * @s1: firstparameter
 * @s2: second parameter
 * Return: returns an interger
 */

char _strcmp(char *s1, char *s2)
{
	int compare;
	
	compare = strcmp(s1, s2);
	return (compare);
}
