#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the best function
 * for the operation
 * @s: char operator
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;

	while (ops[a].f != NULL)
	{
		if (*s == *(ops[a].op) && s[1] == '\0')
			return (ops[a].f);
		a++;
	}
	printf("Error\n");
	exit(99);
}

