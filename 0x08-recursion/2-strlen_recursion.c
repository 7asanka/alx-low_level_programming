#include "main.h"

/**
 * _strlen_recursion - returns the lingth of a string
 * @s: string
 *
 * Return: lingth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
