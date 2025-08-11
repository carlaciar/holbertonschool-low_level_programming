#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves the value for a given key
 * @ht: hash table
 * @key: key to find
 *
 * Return: value string, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if hash table or key is invalid */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Point to the first node in the bucket */
	node = ht->array[index];

	/* Traverse the linked list at this index */
	while (node != NULL)
	{
		/* Compare stored key with the search key */
		if (strcmp(node->key, key) == 0)
			return (node->value); /* Found match, return value */
		node = node->next; /* Move to next node */
	}

	/* Key not found */
	return (NULL);
}

