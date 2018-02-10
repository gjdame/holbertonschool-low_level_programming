#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x)(void)(x)
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (argc < 2)
		printf("Error");

	printf("%d\n", i * j);
	return (0);
}
