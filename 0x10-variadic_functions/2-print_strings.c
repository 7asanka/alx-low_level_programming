#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @seperator: seperates the strings
 * @n: number of arguments passed
 *
 * Return: nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;
	char *str;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(str_list);
}
