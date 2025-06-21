#include "main.h"

/**
 * print_to_98 - all natural numbers from n to 98,
 * followed by a new line.
 * @n: first printed number
 *
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar(98);
	_putchar('\n');
}
