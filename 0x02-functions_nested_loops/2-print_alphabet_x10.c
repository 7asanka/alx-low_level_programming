#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char ch;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
