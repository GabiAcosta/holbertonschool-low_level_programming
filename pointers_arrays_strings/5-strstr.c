#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
