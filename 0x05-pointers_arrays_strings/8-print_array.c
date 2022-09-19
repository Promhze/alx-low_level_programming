#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints an array of n elements
 * @a: array pointer
 * @n: no of elemnents
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
