#include <unistd.h>

/**
 * _putchar - displays output
 * @c: character to print
 *
 * Return: return on succes 1
 * on error, -1 is returned and errno is set appropriately
 */

int _putchar(char)
{
	return (write(1, &c, 1));
}
