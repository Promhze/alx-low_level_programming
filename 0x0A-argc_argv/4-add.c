#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers and prints the output
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a, answer;

	answer = 0;

	for (a = 0; a < argc; a++)
	{
		if (a > 0)
		{
			if (atoi(argv[a]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			res += atoi(argv[a]);
		}
	}
	printf("%d\n", res);
	return (0);
}
