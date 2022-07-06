#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - function that selects
 * the correct function to perform the operation
 * @s: first integer
 * Return: sum of a and b
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

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

/* s does not match any of the 5 expected operators */
	return (NULL);
}
