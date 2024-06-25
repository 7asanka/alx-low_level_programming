#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
		r = (n % 10);
	else
		r = -(n % 10);
	_putchar(r);

	return (r);
}
