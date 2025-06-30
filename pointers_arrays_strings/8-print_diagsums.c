#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of square
 *
 */
void print_diagsums(int *a, int size)
{
	int index = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (index < size)
	{
		sum1 += a[index * size + index];
		sum2 += a[index * size + (size - 1 - index)];

		index++;
	}

	printf("%d, %d\n", sum1, sum2);

}
