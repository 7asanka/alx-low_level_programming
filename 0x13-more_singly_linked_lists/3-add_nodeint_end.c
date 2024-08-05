#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: pointer to the pointer to the first element
 * @n: elements to be added to the list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
