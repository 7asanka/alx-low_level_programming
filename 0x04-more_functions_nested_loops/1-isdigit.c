#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: digit to check
 *
 * Return: 1 if its a digit 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
