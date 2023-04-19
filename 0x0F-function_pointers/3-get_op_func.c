#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as an argument
 * Return: a pointer to the corresponding function
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
		/*op members include "+" "-" etc*/
		/*f members include op_add , op_sub etc*/

		/*
		 *The op member is a pointer to a string that
		 *represents an operator
		 */

		/*
		 *f member is a function pointer that corresponds
		 *to that operator
		 */

		/*
		 *ops[i].op is a pointer string, to access the first
		 * value we dereference it ie *(ops[i].op)
		 */
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
