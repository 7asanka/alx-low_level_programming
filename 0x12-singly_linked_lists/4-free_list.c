#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
