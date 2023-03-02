#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a:
 * @n:
 */
void reverse_array(int *a, int n)
{
	int start, end, aux;

	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		aux = a[start];
		a[start] = a[end];
		a[end] = aux;
	}
}
