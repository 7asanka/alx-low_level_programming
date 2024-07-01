#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
