#include "main.h"

/**
 * swap_int - this attempts to swap twp intergers
 *
 * @a: first interger
 * @b: second interger
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int n = *b;

	*a = n;
	*b = c;
}
