#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/* structures */
typedef struct format
{
	char c;
	void (*f)(va_list args);
} format_t;

#endif
