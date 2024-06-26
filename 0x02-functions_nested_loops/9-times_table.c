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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j
				;
			if (j < 9)
			{
				if (r < 100)
					printf("%d, ", r);
				if (r < 10)
					printf("%d,  ", r);
			} else
				printf("%d\n", r);
		}
	}
}
