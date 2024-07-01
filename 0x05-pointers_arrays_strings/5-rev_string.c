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
	int i, tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}

	for (i = 0; i < (len - 1); i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
	_putchar('\n');
}
