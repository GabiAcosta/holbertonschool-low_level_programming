#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
