#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: value to be swapped.
 * @b: value to be swapped.
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	int swp2= *b;
	*a = swp2;
	*b = swp;
}
