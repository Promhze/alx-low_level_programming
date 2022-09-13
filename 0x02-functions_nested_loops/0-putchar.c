#include <unistd>

/**
 * _putchar - displays output
 * @c: character to print
 *
 * Return: return on succes 1
 * on error, -1 is returned and errno is set appropriately
 */

int putchar(char)
{
	return (write(1, &c, 1));
}
