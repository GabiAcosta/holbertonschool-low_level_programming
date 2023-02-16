#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';
	char nl = '\n';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar(nl);
	return (0);
}
