#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function chosen by the user
 * @s: operator passed
 * Return: function that matches the operator and NULL if the operator passed
 * doesn't match the function
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

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
