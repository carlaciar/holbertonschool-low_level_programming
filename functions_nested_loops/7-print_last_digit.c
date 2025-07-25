#include "main.h"

/**
 * print_last_digit - checks for alphabetic character.
 * @n: the number
 *
 * Return: 0 is number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

		if (last_digit < 0)
			last_digit = -last_digit;

		_putchar('0' + last_digit);
		return (last_digit);
}
