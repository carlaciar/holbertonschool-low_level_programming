#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min integers
 * @max: max integers
 *
 * Return: NULL if fails or min > max
 *
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int i = max - min;
	unsigned int j = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((i + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		array[j] = min;
		min++;
		j++;
	}

	return (array);
}
