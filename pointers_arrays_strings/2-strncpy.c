#include "main.h"
/**
 * *_strcpy - function that copies a string
 * @dest: string copy destination
 * @src: the string to copy
 * @n: 
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *aux = dest;

	if (n >= 0)
	{
		while ((src[count]) && (n > 0))
		{
			dest[count] = src[count];
			count++;
			n--;
		}
	}
	return (aux);
}
