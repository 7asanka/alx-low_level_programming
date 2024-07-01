#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}

	for (k = 0; s[k] != '\0'; k++)
	{
		_putchar(s[k]);
	}
	_putchar('\n');

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
