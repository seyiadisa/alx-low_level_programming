#include "3-calc.h"

/**
 * get_op_func - functions that selects the correct function to run
 * @s: operator
 *
 * Return: pointer to function to run
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
		if (strncmp(s, ops[i].op, 1) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
