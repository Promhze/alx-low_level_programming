#include <stdio.h>
/**
 * main - display output
 *
 * Return: always return zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
