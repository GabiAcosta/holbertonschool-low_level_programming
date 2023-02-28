#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first.
 * @str: the string to print.
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
		{
		_putchar(*str);
		}
		c++;
		str++;
	}
	_putchar(10);
}
