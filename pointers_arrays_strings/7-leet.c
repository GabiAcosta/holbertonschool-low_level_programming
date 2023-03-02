#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: the string to be encoded
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char letters[] = "aeotl";
	char numbers[] = "43071";

	while (str[i])
	{
		while (letters[j])
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
