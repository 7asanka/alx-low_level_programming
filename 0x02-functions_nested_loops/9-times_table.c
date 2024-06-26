#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j > 0)
			{
				putchar(',');
				putchar(' ');
			}

			if (result < 10)
				putchar(' ');
			if (result < 100)
				putchar(' ');

			printf("%d", result);
		}
		putchar('\n');
	}
}
