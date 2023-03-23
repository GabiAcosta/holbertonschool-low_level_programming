#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between numbers
 * Return: .
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
