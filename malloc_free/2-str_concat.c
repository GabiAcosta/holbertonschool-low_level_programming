#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcat(char *dest, char *src);
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: a pointer to a newly allocated space in memory with s1 and s2
 * concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int len, len2;
	char *aux;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	len = _strlen(s1);
	len2 = _strlen(s2);

	aux = malloc(sizeof(char) * (len + len2 + 1));
	if (aux == NULL)
	{
		exit(1);
	}
	_strcat(aux, s1);
	_strcat(aux, s2);

	return (aux);
}
/**
 * _strlen - returns the length of a string
 * @s: the string to be calculed
 * Return: the length of a string
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
