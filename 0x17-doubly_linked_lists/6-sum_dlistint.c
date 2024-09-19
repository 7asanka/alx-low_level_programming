#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sums all the data in the list
 * @head: pointer to the first nod
 *
 * Return: the sum. or 0 if the lists if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
