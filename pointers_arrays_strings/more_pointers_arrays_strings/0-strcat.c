#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: dest to string concatenate
 * @src: string to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;
	char *aux = dest;

	while (dest[count])
	{
		count++;
	}
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	return (aux);
}
