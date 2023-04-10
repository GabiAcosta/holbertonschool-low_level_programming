#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number to convert
 * Return: the binary number converted to an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}
