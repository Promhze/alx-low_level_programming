#include <unistd.h>

/**
 * _putchar - takes in the c character
 * @c: charatcer
 * 
 * Return: on success of 1
 * on error, -1 is returned
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
