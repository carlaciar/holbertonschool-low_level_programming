#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Description: From 00:00 to 23:59, minute by minute
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');

			minute++;
		}
		hour++;
	}
}

