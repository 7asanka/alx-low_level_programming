#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
