#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int j = 0;
	int i;
	char rev[500];

	for (i = length - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	strcpy(s, rev);

}
