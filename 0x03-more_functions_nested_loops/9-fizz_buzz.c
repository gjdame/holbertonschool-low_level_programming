#include <stdio.h>
/**
 * main - prints 1 to 100
 * for multiples of 3 print fizz
 * for multiples of 5 print buzz
 * for multiples of 3 & 5 print fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz ");
		}
			else
			{
			printf("%d ", x);
			}
		}
	printf("\n");
	return (0);
}
