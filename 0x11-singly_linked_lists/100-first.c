#include <stdio.h>
/**
 * first - prints a line before main executes in a function
 *
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
