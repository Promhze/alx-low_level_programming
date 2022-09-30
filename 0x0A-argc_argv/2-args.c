#include <stdio.h>
#include <stdlib.h>
/**
 * main - will prints all arguments received
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
