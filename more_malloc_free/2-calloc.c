#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size: size in bytes of the elements of the arary
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
