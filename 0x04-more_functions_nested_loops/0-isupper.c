#include "main.h"

/*
 * _isupper - checks for uppercase character
 * @c: char
 *
 * Return: return 1 if c is uppercase 0 if else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
