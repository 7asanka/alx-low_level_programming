#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node to the beginning of the list
 * @head: pointer to the haed of the pointer
 * @str: string
 *
 * Return: pointer to the new element added
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
