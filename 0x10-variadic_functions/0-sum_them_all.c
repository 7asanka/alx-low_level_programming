#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all input arguments
 * @n: number of integenrs
 *
 * Return: sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
