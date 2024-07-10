#include "main.h"

/**
 * _print_rev_recursion - prints string in reveres
 * @s: strint pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_revursion(s + 1);
	_putchar(*s);
}
