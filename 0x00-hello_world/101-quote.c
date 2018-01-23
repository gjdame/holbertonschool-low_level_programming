#include <stdio.h>
#include <unistd.h>
/**
 * main -prints a line to the standard error using the write function
 *
 * Return: 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, 59);
	return (1);
}
