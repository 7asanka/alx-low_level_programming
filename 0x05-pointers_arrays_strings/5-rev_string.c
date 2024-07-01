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
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
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
