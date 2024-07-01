#include <stdio.h>
#include "main.h"

/**
 * print_array - n elements of an array of integers, followed by a new line.
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		i == n - 1 ? printf("%d", a[i]) : printf("%d, ", a[i]);
	}
	putchar('\n');
}
