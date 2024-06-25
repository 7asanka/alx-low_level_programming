#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer
 * @n: integer to be computed
 *
 * Return: return the absolute value as an integer
 */
int _abs(int n)
{
	int r;

	if (n == 0)
		r = 0;
	else if (n > 0)
		r = n;
	else if (n < 0)
		r = -n;

	return (r);
}
