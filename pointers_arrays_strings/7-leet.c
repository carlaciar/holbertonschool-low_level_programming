#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: the string from the start
 *
 */
char *leet(char *str)
{
	int index = 0, position;
	char from[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char to[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[index] != '\0')
	{
		position = 0;

		while (position < 10)
		{
			if (str[index] == from[position])
			{
				str[index] = to[position];
				break;
			}

			position++;

		}

		index++;

	}

	return (str);

}


