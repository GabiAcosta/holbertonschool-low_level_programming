#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte that fills
 * @n: number of bytes to fill
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (p);
}
