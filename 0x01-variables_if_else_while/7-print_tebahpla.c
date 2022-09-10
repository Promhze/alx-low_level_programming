#include <stdio.h>
/**
 * main - display output
 *
 * Return: always return zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
