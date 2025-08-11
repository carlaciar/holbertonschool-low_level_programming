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
	hash_node_t *node;
	char *dup;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	dup = strdup(value ? value : "");
	if (dup == NULL)
		return (0);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = dup;
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		free(dup);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(dup);
		free(node);
		return (0);
	}
	node->value = dup;
	node->next = ht->array[key_index((const unsigned char *)key, ht->size)];
	ht->array[key_index((const unsigned char *)key, ht->size)] = node;
	return (1);
}
