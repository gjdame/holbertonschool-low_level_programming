#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings in arguments
* @separator: string
* @n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *tmp;
const char *s = separator;

va_start(list, n);

i = 0;
while (i < n)
{
tmp = va_arg(list, char *);
if (tmp == NULL)
printf("(nil)");
else
printf("%s", tmp);
if (i < n - 1 && s != NULL)
printf("%s", s);
i++;
}
printf("\n");

va_end(list);
}
