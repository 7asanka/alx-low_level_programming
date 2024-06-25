#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r = -r;
	_putchar(r + '0');

	return (r);
}
