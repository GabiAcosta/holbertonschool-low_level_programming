#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * *_strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len = _strlen(str);
	char *copy;

	if (str == NULL)
		return (0);
	char *aux = malloc(sizeof(str) * len);

	if (aux == NULL)
		exit(1);
	copy = _strcpy(aux, str);

	return (copy);
}
/**
 * _strlen - returns the length of a string.
 * @s: the string to be calculed.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
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
	dest[count] = '\0';
	return (dest);
}
