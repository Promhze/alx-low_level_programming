#include <stdio.h>
/**
 * main - this dispalys the ouput
 *
 * Return: always return zero
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d bytes(s)\n", sizeof(e));
	return (0);
}
