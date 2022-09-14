#include <unistd.h>

/**
 * _putchar - writes the characters
 * @c: the characters to print
 *
 * Return on sucess 1
 * on error, -1 is returned, and error is set approariately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
