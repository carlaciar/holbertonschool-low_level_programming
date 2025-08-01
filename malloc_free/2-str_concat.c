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
	int i = 0, j = 0, c = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
	while (c < i)
	{
		array[c] = s1[c];
		c++;
	}
	while (k < j)
	{
		array[c] = s2[k];
		c++;
		k++;
	}
	array[c] = '\0';
	return (array);
}

