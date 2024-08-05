#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list
 *
 * Return: the value of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (head == NULL)
		return (0);

	value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (value);
}
