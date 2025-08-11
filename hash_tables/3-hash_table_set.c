#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *dup_value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Duplicate the value (empty string if value is NULL) */
	if (value != NULL)
		dup_value = strdup(value);
	else
		dup_value = strdup("");

	if (dup_value == NULL)
		return (0);

	/* Find the index in the table */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists, update value if so */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = dup_value;
			return (1);
		}
		node = node->next;
	}

	/* Create a new node if key not found */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(dup_value);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(dup_value);
		free(node);
		return (0);
	}

	node->value = dup_value;
	node->next = ht->array[index]; /* Insert at beginning */
	ht->array[index] = node;

	return (1);
}
