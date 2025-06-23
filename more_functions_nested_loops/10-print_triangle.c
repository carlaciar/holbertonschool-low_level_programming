#include "main.h"

/**
 * print_triangle - draws a diagonal line in the terminal
 * @size: the size of the triangle
 *
 * Return: int value
 */
void print_triangle(int size)
{
	int row = 0, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < size)
	{
		space = size - row - 1;
		hash = row + 1;

		while (space > 0)
		{
			_putchar(' ');
			space--;
		}

		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}

		_putchar('\n');
		row++;
	}
}
