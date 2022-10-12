#include "3-calc.h"

/**
 * op_add - a function to add two numbers
 * @a: first number to be added
 * @b: second number to be added
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitiplies two number
 * @a: furst number
 * @b: second number
 * Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two mumbers
 * @a: first number
 * @b: second number
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulus of two
 * numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
