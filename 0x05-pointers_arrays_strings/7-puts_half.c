#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	} else
	{
		for (i = (len + 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
