#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
* struct print_stuff - struct for #3
* @c: char
* @f: function
*/
struct print_stuff
{
char *c;
void (*f)(va_list list);
};
typedef struct print_stuff print_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list list);
void print_f(va_list list);
void print_i(va_list list);
void print_s(va_list list);
#endif
