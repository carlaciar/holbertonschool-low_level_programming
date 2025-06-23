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
		_putchar(92);
		i++;
	}

	_putchar('\n');
}
