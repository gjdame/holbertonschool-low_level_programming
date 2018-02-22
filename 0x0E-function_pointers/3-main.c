#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - basic calculator
* @argc: integer
* @argv: char array
* Return: result
*/
int main(int argc, char *argv[])
{
int arg1;
int arg2;
int (*oper)(int, int);
int result;

oper = get_op_func(argv[2]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);

if (oper == NULL)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}

result = oper(arg1, arg2);
printf("%d\n", result);
return (0);
}
