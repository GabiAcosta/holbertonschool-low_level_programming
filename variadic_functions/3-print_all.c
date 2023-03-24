#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format:
 * Return: .
 */
void print_all(const char * const format, ...)
{
	va_list args;
	format_t form[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	int i = 0, j;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (form[j].c)
		{
			if (format[i] == form[j].c)
			{
				printf("%s", separator);
				form[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}
void print_int(va_list args)
{
	int d;

	d = va_arg(args, int);
	printf("%d", d);
}
void print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
}
void print_string(va_list args)
{
	char *s;
	
	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
