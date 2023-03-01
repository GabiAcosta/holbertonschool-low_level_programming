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

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
