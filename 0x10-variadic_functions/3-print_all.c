#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the format of what is printed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
			|| format[i] == 's')
		{
			printf("%s", sep);
			sep = ", ";

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				str = va_arg(args, char*);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
