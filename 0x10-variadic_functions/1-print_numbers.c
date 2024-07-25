#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string printed bitween numbers
 * @n: number of arguments passed
 *
 * Return: nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (seperator == NULL)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
}
