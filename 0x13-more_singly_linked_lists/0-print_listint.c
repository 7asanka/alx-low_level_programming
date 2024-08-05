#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints a list of integers
 * @h: pointer to the head of the head of the list
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		int n = h->n;

		printf("%d\n", n);
		count++;
		h = h->next;
	}

	return (count);
}
