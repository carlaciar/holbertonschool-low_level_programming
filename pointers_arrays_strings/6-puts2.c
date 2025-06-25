#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string
 *
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length += 2;

		if (str[length + 2] == '\0')
			break;
	}
	_putchar('\n');
}
