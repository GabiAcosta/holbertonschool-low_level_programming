#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: returns the string converted
 */
int _atoi(char *s)
{
	int sign = 1, count = 0, stop = 0;
	unsigned int num = 0;

	while ((s[count]) && (stop == 0))
	{
		if (s[count] == '-')
		{
			sign = sign * -1;
		}
		while (s[count] >= '0' && s[count] <= '9')
		{
			stop = 1;
			num = (num * 10) + (s[count] - 48);
			count++;
		}
		count++;
	}
	return (num * sign);
}
