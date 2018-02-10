#include <stdio.h>
#define UNUSED(x)(void)(x)
/**
 * main - prints argc
 * @argc: int
 * @argv: array of ints
 * Return: num of argc
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc);
	return (0);
}
