#include "main.h"
/**
 * _abs - prints the sign of a number.
 * @x: the number to check.
 * Return: the absolute value of an integer.
 */
int _abs(int x)
{
	if (x < 0)
	{

		x = x * (-1);
		return (x);
	}
	return (x);
}
