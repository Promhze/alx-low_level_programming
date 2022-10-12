#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given
 * as a parameter in each array element
 * @array:input interger array
 * @size: input size
 * @action: pointer to tye array function
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}

