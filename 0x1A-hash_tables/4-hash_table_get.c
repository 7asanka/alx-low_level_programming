#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to be found
 *
 * Return: the value assosiated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;
	char *value;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			value = current->value;
			if (value == NULL)
				return (NULL);
			return (value);
		}
		current = current->next;
	}

	return (NULL);
}
