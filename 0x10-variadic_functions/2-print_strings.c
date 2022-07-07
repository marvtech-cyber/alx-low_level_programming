#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: No return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *next_string;

	va_list strings;

	va_start(strings, n);

	while (i < n)
	{
		next_string = va_arg(strings, char*);
		if (next_string == NULL)
			printf("(nil)");
		else
			printf("%s", next_string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
