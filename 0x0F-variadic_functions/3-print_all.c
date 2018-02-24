#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print anything
* @format: constant char
*/
void print_all(const char * const format, ...)
{

int i;
int j;
char *ptr = "";
char *ptr2 = ", ";
va_list list;

print_t prints[] = {
{"c", print_c},
{"i", print_i},
{"s", print_s},
{"f", print_f},
{NULL, NULL}
};

va_start(list, format);

i = 0;
while (format != NULL && format[i])
{
j = 0;
while (prints[j].c != '\0')
{
if (*prints[j].c == format[i])
{
printf("%s", ptr);
prints[j].f(list);
ptr = ptr2;
}
j++;
}
i++;
}
printf("\n");
va_end(list);
}
/**
* print_c - print character
* @list: va_list
*/
void print_c(va_list list)
{
printf("%c", va_arg(list, int));
}
/**
* print_f - print float
* @list: va_list
*/
void print_f(va_list list)
{
printf("%f", va_arg(list, double));
}
/**
* print_i - print integer
* @list: va_list
*/
void print_i(va_list list)
{
printf("%d", va_arg(list, int));
}
/**
* print_s - print string
* @list: va_list
*/
void print_s(va_list list)
{
char *tmp;
tmp = va_arg(list, char *);
if (tmp == NULL)
{
printf("(nil)");
return;
}
printf("%s", tmp);
}
