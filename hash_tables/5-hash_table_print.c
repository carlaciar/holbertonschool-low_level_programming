#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints all key/value pairs in a hash table
 * @ht: pointer to the hash table
 *
 * Description: Prints in format: {'key': 'value', 'key': 'value', ...}
 * Order: follows array index order, then linked list order in each bucket
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_pair = 1; /* Flag to handle commas between pairs */

	/* If table is NULL, do nothing */
	if (ht == NULL)
		return;

	printf("{");

	/* Loop through each index of the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Loop through linked list at this index */
		while (node != NULL)
		{
			/* Print comma before all pairs except the first */
			if (first_pair == 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;
			node = node->next;
		}
	}

	printf("}\n");
}
