#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list
 * @h: the string
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
			break;

		else
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
