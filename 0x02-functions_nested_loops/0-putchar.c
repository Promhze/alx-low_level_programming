#include <instd.h>

/**
 * _putchar - outputs the charcater
 * @c:the characters itself
 *
 * Return: on success 1
 * on error -1 is returned, and error is set appropriately
 */

int _putchar(char)
{
	return (write(1, &c, 1));
}
