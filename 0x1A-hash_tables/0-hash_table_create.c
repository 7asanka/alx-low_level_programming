#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_table_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
