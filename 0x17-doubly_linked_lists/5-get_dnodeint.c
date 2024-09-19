#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the node at the nth index
 * @head: pointer to the first node
 * @index: index of the desired node
 *
 * Return: the node at the nth index, or Null if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (head);
}
