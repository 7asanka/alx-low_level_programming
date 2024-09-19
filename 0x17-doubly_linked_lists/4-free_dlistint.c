#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: poiter to the first element
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
