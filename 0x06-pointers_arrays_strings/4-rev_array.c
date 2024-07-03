#include "main.h"

/**
 * reverse_array - reverses and array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to revers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
