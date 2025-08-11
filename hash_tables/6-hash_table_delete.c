#include "hash_tables.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table and frees memory
 * @ht: pointer to the hash table
 *
 * Description: Frees all keys, values, nodes, and the array itself
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	/* If table is NULL, nothing to delete */
	if (ht == NULL)
		return;

	/* Loop through each index in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Free all nodes in this bucket's linked list */
		while (node != NULL)
		{
			temp = node->next; /* Save pointer to next node */
			free(node->key);   /* Free key string */
			free(node->value); /* Free value string */
			free(node);        /* Free the node itself */
			node = temp;       /* Move to next node */
		}
	}

	free(ht->array); /* Free the array of pointers */
	free(ht);        /* Free the hash table structure */
}
