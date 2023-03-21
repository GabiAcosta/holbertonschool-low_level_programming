#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: name to print
 * @f: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
