#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Entry point
 * @s: is a pointer
 *
 * Return: output
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

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s)

		i++;
	}

	return ((ops[i].f));
}
