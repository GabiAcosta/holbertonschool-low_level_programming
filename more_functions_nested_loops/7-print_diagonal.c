#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: the size of the diagonal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar(92);
				} else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
