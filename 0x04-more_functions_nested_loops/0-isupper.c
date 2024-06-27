#include "main.h"

/*
 * isupper - checks for uppercase character
 * @c: char
 *
 * Return: void
 */
int isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else 
		return (0);
}
