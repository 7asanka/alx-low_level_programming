#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;

			if (j > 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (result < 10)
			_putchar(' ');
			printf("%d", r);
		}
		_putchar('\n');
	}
}
