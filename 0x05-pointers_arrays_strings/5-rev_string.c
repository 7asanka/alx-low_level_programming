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

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < (len - 1))
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
