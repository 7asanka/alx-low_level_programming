#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, j, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
