#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to the pointer to the first node
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *it;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	it = *head;
	while (it->next != NULL)
	{
		it = it->next;
	}

	it->next = new;
	new->prev = it;

	return (new);
}
