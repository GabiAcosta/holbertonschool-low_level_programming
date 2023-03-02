#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: string modified
 */
char *cap_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == 32 || s[count] == '\t' || s[count] == '\n' || s[count] == ','
		|| s[count] == ';' || s[count] == '.' || s[count] == '!' || s[count] == '?'
		|| s[count] == '"' || s[count] == '(' || s[count] == ')' || s[count] == '{'
		|| s[count] == '}')
		{
			if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
				s[count + 1] = (s[count + 1] - 32);
		}
		if (s[count] == 0)
		{
			if (s[count] >= 'a' && s[count] <= 'z')
				s[count] = (s[count] - 32);
		}
		count++;
	}
	return (s);
}
