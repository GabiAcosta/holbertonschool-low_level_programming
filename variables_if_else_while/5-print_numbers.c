#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char nl = '\n';

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar(nl);
	return (0);
}
