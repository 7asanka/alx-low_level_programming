#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data in list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data in list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *plist;
	int sum = 0;

	if (head == NULL)
		return (0);

	plist = head;
	while (plist != NULL)
	{
		sum += plist->n;
		plist = plist->next;
	}

	return (sum);
}
