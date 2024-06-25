#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: input number to be checked
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */
int print_sign(int n)
{
	int r;

	if (n == 0)
	{
		_putchar(0);
		r = '0';
	} else if (n > 0)
	{
		_putchar('+');
		r = 1;
	} else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}

	return (r);
}
