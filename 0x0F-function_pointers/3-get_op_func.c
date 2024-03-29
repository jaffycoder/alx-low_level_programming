#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - function pointer used to collect the correct function
 * @s: the operator input given.
 *
 * Return: pointer to the function that corresponds to the
 * operator given as the parameter
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
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
