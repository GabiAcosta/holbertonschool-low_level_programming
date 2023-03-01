#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: dest to string concatenate
 * @src: string to concatenate
 * @n: number of characters to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;
	char *aux = dest;

	if (n >= 0)
	{
		while (dest[count])
		{
			count++;
		}
		while ((src[count2]) && (n > 0))
		{
			dest[count] = src[count2];
			count++;
			count2++;
			n--;
		}
	} else
	{
		dest[count] = '\0';
	}
	return (aux);
}
