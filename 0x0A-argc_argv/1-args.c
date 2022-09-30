#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: always return zero
 */

int main(int argc, char **argv)
{
	int calc;

	for (calc = 0; calc < argc; calc++)
	{
		*argv[calc] = *argv[calc];
	}
	printf("%d\n", (calc - 1));
	return (0);
}


