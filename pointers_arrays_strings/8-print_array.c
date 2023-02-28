#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: the array to print.
 * @n: number of elements to print.
 */
void print_array(int *a, int n)
{
	int count = 0;

	for (; count < n; count++)
	{
		printf("%d", a[count]);
		if (count < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
