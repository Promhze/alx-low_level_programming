#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: input character
 *
 * Return: return 1 if successful
 * if any error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
