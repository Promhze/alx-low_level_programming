#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a funtion creates an array of chars,
 * and initializes it with a specific char
 * @size: input size
 * @c: input character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}
	return (arr);
}
