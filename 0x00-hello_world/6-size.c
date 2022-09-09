#include <stdio.h>
/**
 * main - displays the output
 *
 * Return: always return zero
 */
int main(void)
{
	/*declarations*/
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/*statement*/
	printf("Size of char: %d byte(s)", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
