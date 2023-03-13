#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array
 * @c: character to initialize the array
 * Return: a pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *aux;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	aux = malloc(sizeof(c) * size);
	if (aux == NULL)
	{
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		aux[i] = c;
	}
	return (aux);
}
