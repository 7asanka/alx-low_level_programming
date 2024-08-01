#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node to the end of the list
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	return (new_node);
}
