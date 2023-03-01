#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: string copy destination
 * @src: the string to copy
 * @n: number of characters to copy
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *aux = dest;

	if (n >= 0)
	{
		while ((dest[count]) && (n > 0))
		{
			dest[count] = src[count];
			count++;
			n--;
		}
	}
	return (aux);
}
