#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table,
 * or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newhashtable = malloc(sizeof(hash_table_t));

	if (newhashtable == NULL)
	{
		return (NULL);
	}

	newhashtable->size = size;
	newhashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (newhashtable->array == NULL)
	{
		free(newhashtable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		newhashtable->array[i] = NULL;

	return (newhashtable);
}
