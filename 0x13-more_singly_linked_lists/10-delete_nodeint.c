#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to the pointer to the first node
 * @index: index of the element to delete
 *
 * Return: 1 if succeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *it;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	it = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(it);
		return (1);
	}

	for (i = 0; i < index - 1 && it->next != NULL; i++)
	{
		it = it->next;
	}
	if (it == NULL || it->next == NULL)
		return (-1);
	
	temp = it->next;
	it->next = temp->next;
	free(temp);

	return (1);
}
