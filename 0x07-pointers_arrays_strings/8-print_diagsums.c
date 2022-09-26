#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals of a square matrix
 * @a: string input
 * @size: input character
 *
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int b, c, s1, s2;

	s1 = 0;
	s2 = 0;
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
			{
				s1 += *((a + b * size) + c);
			}
			if ((b + c) == (size - 1))
			{
				s2 += *((a + b * size) + c);
			}
		}
	}
	printf("%i, %i\n", s1, s2);
}
