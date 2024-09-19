#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to the pointer to the first node
 * @idx: index to insert the node
 * @n: value of the new index
 *
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *it = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (it != NULL && i < idx - 1)
	{
		it = it->next;
		i++;
	}

	if (it == NULL || it->next == NULL)
	{
		if (i == idx - 1)
			new = add_dnodeint_end(h, n);
		free(new);
		return (NULL);
	}

	new->next = it->next;
	new->prev = it;
	if (it->next != NULL)
		it->next->prev = it;
	it->next = new;
	return (new);
}
