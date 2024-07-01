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

	for (j = 0; j <= len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
