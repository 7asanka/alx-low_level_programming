#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first element in the list
 *
 * Return: nothin
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
