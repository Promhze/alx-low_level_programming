#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: an array that contain the arguements.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int a, b, addition = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[a]);
	}
	printf("%d\n", addition);
	return (0);
}
