#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to modify
 * Return: string modified with uppercases
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = (s[count] - 32);
		}
		count++;
	}
	return (s);
}
