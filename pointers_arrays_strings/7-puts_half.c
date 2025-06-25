#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int half;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length + 1) / 2;
	start = half;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
