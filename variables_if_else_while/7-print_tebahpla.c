#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	char nl = '\n';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar(nl);
	return (0);
}
