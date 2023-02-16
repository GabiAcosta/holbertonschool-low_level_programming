#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 48;
	int ch2 = 97;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	while (ch2 <= 102)
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
