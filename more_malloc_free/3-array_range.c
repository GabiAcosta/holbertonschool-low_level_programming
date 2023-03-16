#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimun value
 * @max: maximun value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int array = (max - min) + 1;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * array);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < array; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
