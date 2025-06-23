#include "main.h"

/**
 * more_numbers - prints the numbers 10 times, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int num_times = 0;

	while (num_times < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			if (num >= 10)
				_putchar('1');

			_putchar('0' + (num % 10));
			num++;
		}
		_putchar('\n');
		num_times++;
	}
}
