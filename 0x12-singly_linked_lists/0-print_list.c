#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints elements of a list
 * @h: pointer to a list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		ncount++;
		h = h->next;
	}
	return (ncount);
}
