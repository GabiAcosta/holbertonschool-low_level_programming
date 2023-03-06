#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to factorize
 * Return: -1 to indicate an error and 1 if 0 is factorized, otherwise the
 * factorial of the given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
