#include <stdio.h>
#define UNUSED(x)(void)(x)
/**
 * main - prints argv
 * @argc: int
 * @argv: array of strings
 * Return: each instance of argv
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
