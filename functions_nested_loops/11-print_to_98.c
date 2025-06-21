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
	int current = n;

	while (current != 98)
	{
		int num = current;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num >= 100)
		{
			_putchar((num / 100) + '0');
			_putchar((num / 10 % 10) + '0');
			_putchar((num % 10) + '0');
		}
		else if (num >= 10)
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		else
		{
			_putchar(num + '0');
		}

		_putchar(',');
		_putchar(' ');

		if (current < 98)
			current++;
		else
			current--;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
