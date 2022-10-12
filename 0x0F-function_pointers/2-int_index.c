#include "funtion_pointers.h"

/**
 * int_index - will search for an interger
 * @array: array input
 * @size: total size of the array
 * @cmp: pointer to the fuction to be
 * compared
 * Return: on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	return (-1);
}
