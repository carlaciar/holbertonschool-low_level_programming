#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character \ should be printed
 *
 * Return: int value / int n
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
		_putchar(' ');
		j++;
		}

		_putchar(92);
		_putchar('\n');
		i++;
	}
}
