#include "main.h"

/**
 * reverse_array - reverses array contents
 * @a: param one
 * @n: param two
 * Return: will return an interger
 */

void reverse_array(int *a, int n)
{
	int *p, b, aux, c;

	p = a;

	for (b = 0; b < n; b++)
	{
		p++;
	}
	for (c = 0; c < n / 2; c++)
	{
		aux = a[c];
		a[c] = *p;
		*p = aux;
		p--;
	}
}
