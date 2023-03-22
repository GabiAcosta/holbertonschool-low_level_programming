#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: name of the array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: returns the index of the first element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
