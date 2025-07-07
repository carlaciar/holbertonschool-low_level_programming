#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from s2
 *
 * Return: NULL if function fails
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, c = 0, k = 0;

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

	ptr = malloc(i + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (c < i)
	{
		ptr[c] = s1[c];
		c++;
	}

	while (k < n)
	{
		ptr[c] = s2[k];
		c++;
		k++;
	}

	ptr[c] = '\0';
	return (ptr);
}
