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
	char *p = 0;

	if (c == '\0')
	{
		p = "";
		return (p);
	}
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			if (s[i]  == c)
			{
				p = s + i;
				break;
			}
			i++;
		}
	}
	return (p);
}
