#include "main.h"

/**
 * leet - leet function
 * @x: parameter x
 * Return: a string
 */
char *leet(char *x)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == big[b] || x[a] - 32 == big[b])
			{
				x[a] = bigNum;
			}
			b++;
		}
		a++;
	}
	return (x);
}
