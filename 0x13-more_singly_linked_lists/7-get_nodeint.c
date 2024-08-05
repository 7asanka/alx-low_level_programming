#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth element of a list
 * @head: pointer to the head node
 * @index: the index of the requested element
 *
 * Return: the nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pnode = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (pnode == NULL)
			return (NULL);
		pnode = pnode->next;
	}

	return (pnode);
}
