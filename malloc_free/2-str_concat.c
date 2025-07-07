#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2 to concatenate string 1 into
 *
 * Return: NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int j = 0;
	int c;
	int k;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (c < i)
	{
		array[c] = s1[c];
		c++;
	}
	k = 0;
	while (k < j)
	{
		array[c] = s2[k];
		c++;
		k++;
	}
	array[c] = '\0';
	return (array);
}

