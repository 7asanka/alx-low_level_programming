#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: lenght of the diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	} else
		_putchar('\n');
}
