#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: memory area copy destination
 * @src: memory area to copy
 * @n: number of bytes to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = dest;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (p);
}
