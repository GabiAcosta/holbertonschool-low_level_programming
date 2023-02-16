#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char nl = '\n';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(nl);
	return (0);
}
