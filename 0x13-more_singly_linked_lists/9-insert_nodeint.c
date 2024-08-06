#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to the pointer to the first node
 * @idx: index at which a node will be inserted
 * @n: value of the inserted node
 *
 * Return: address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *plist;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	plist = *head;
	for (i = 0; plist != NULL && i < idx - 1; i++)
	{
		plist = plist->next;
	}

	if (plist == NULL)
	{
		free(new);

	}

	new->next = plist->next;
	plist->next = new;

	return (new);

}
