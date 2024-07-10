#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		return;
	s++;
	_puts_recursion(s);
}
