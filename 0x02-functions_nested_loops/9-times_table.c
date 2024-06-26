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
			r = i * j;

			if (j == 9)
			{
				printf("%d\n", r);
			} else if (j < 9)
			{
				if ( r < 10)
					printf("%d,  ", r);
				else if (r < 100 && r >= 10)
					printf("%d, ", r);
			}
		}
	}
}
