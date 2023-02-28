#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to print.
 */
void puts_half(char *str)
{
	int length = 0, half;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	} else
	{
		half = (length + 1) / 2;
	}
	for (; half < length; half++)
	{
		_putchar(str[half]);
	}
	_putchar(10);
}
