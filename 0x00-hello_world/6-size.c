#include <stdio.h>

/**
 * main - Program prints size of various types.
 *
 * Return:0
 */
int main(void)
{
	char c;
	int i;
	long int y;
	long long int x;
	float w;

	printf("Size of a char: %d byte(s)\n", (sizeof(c)));
	printf("Size of an int: %d byte(s)\n", (sizeof(i)));
	printf("Size of a long int: %d byte(s)\n", (sizeof(y)));
	printf("Size of a long long int: %d byte(s)\n", (sizeof(x)));
	printf("Size of a float: %d byte(s)\n", (sizeof(w)));
	return (0);
}
