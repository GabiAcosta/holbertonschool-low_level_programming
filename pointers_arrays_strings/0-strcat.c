#include "main.h"
/**
 * *_strcat -
 * @dest:
 * @src:
 * Return:
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
