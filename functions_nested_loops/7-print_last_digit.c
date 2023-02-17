#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @x: the number to check.
 * Return: the last digit of the given number.
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
