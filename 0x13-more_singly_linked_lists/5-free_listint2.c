#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the pointer to NULL
 * @head: pointer to the pointer to the first element
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
