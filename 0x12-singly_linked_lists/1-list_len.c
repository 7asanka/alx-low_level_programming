#include "lists.h"

/**
 * list_len - return the length of the list
 * @h: the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t ncount = 0;

	while (h)
	{
		ncount++;
		h = h->next;
	}

	return (ncount);
}
