#include "holberton.h"
/**
 * binary_to_uint - binary number to unsigned int
 * @b: string constant
 * Return: int ret_val, binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret_val;

	if (b == NULL)
		return (0);

	for (ret_val = 0; *b; b++)
	{
		if (*b == '0')
			ret_val = ret_val << 1;
		else if (*b == '1')
		{
			ret_val = ret_val << 1;
			ret_val = ret_val ^ 1;
		}
		else
			return (0);
	}
	return (ret_val);
}
