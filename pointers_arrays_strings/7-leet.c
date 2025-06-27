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
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] == 'a' || str[index] == 'A' || str[index] == 'e' ||
				str[index] == 'E' || str[index] == 'o' ||
				str[index] == 'O' || str[index] == 't' ||
				str[index] == 'T' || str[index] == 'l' ||
				str[index] == 'L')
		{
			str[index] = (str[index] == 'a' || str[index] == 'A') ? '4' :
				(str[index] == 'e' || str[index] == 'E') ? '3' :
				(str[index] == 'o' || str[index] == 'O') ? '0' :
				(str[index] == 't' || str[index] == 'T') ? '7' :
				(str[index] == 'l' || str[index] == 'L') ? '1' :
				str[index];
		}

		index++;

	}

	return (str);

}
