#include "main.h"
#include <string.h>
 /**
  * *_strcat - concatenates two strings
  * @dest: first parameter
  * @src: second parameter
  * Return: returns a strig
  */
char *_strcat(char *dest, char *src)
{
	int ent = 0, c;

	while (dest[c])
	{
		ent++;
	}

	for ( c = 0; src[c] != '\0'; c++)
	{
		dest[ent] = src[c];
		ent += c;
	}
	dest[ent] = '\0';
	return (dest);
}
