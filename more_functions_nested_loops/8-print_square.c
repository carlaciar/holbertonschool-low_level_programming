#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: int value
 */
void print_square(int size)
{

	int i = 0;


	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		_putchar('#');
		size++;
	}

	_putchar('\n');
	i++;
}
