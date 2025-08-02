#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: the start of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		{
			printf("%d\n", h->n);
		}

		h = h->next;
		count++;
	}

	return (count);
}
