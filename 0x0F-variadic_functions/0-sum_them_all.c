#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum of arguments
* @n: num of arguments
* Return: @sum or 0 if n equals 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i;
int sum;

if (n == 0)
return (0);
va_start(list, n);

i = 0;
sum = 0;
while (i < n)
{
sum = sum + va_arg(list, int);
i++;
}
va_end(list);
return (sum);
}
