#include "main.h"
/**
 * *_strcpy - function that copies a string
 * @dest: string copy destination
 * @src: the string to copy
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
