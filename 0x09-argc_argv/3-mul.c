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

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
