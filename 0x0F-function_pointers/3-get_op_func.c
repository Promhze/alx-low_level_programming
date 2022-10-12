#include "3-calc.h"

/**
 * get_op_func - selects the best function
 * for the operation
 * @s: char operator
 * Return: pointer to the function
 */

int (get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (a < 10)
	{
		if (s[0] == ops->op[a])
			break;
		a++;
	}
	return (ops[a / 2].f);
}

