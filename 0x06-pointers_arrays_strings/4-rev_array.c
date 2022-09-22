#include "main.h"

/**
 * reverse_array - reverses array contents
 * @a: array
 * @n: param two
 */

void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1]  = c;
	}
}
