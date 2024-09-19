#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the pointer to the head of the list
 * @n: value of the new node
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
	} else
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
