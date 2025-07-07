#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: NULL if str = NULL
 *
 */
char *_strdup(char *str)
{
	char *copied;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	copied = malloc((i + 1) * sizeof(char));

	if (copied == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j <= i)
	{
		copied[j] = str[j];
		j++;
	}

	return (copied);
}
