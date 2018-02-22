#include <stdio.h>
#include <stdlib.h>
/**
* main - returns op codes for address of main
* @argc: num of arguments
* @argv: char array
* Return: print opcodes
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
char *s = (char *) &main;

int num = atoi(argv[1]);
int x;

if (num < 0)
{
printf("Error\n");
exit(2);
}


x = 0;
while (x < num)
{
printf("%.02hhx ", s[x]);
x++;
}
printf("\n");
return (0);
}
