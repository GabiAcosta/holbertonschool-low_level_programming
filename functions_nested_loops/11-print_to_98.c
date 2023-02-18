#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: num
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
