#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: .
 * @c: .
 * Return: .
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i])
	{
		if (s[i]  == c)
		{
			p = s + i;
			return (p);
		}
		i++;
	}
	return (0);
}
