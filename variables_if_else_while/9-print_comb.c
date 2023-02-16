#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 48;
	int comma = 44;
	int space = 32;

	while (ch <= 57)
	{
		putchar(ch);
		putchar(comma);
		putchar(space);
		ch++;
	}
	putchar('\n');
	return (0);
}
