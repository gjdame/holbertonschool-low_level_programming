#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* get_op_func - get operation for use in 3-main
* @s: char pointer s
*
* Return: int
*/
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

i = 0;
while (ops[i].f != NULL && strcmp(ops[i].op, s) != 0)
i++;

return (ops[i].f);
}
