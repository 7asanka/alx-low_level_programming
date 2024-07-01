#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
