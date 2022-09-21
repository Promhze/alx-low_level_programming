#include "main.h"
 /**
  * _strcat - concatenates two strings
  * @dest: first parameter
  * @src: second parameter
  * Return: returns a strig
  */
char *_strcat(char *dest, char *src)
{
	int ent = 0, c;

	while (dest[ent])
	{
		ent++;
	}

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[ent] = src[c];
		ent += 1;
	}
	dest[ent] = '\0';
	return (dest);
}
