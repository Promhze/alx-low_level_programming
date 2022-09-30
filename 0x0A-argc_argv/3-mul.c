#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	int a, input1, input2, product;

	if (argc != 3)
	{
		return (printf("Erro\n"), 1);
	}
	for (a = 0; a < argc; a++)
	{
		input1 = atoi(argv[1]);
		input2 = atoi(argv[2]);
	}
	product = input1 * input2;
	printf("%d\n", product);
	return (0);
}
