#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0, j = 0;
	char rev[600];

	while (s[length] != '\0')
	{
		rev[length] = s[length];
		length++;
	}

	for (length = length - 1; length >= 0; length--)
	{
		s[length] = rev[j];
		j++;
	}
}
