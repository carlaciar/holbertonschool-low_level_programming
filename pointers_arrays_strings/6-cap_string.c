#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: the string from start
 *
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] == ' ' || str[index] == '\n' || str[index] == ',' ||
				str[index] == '.' || str[index] == '!' ||
				str[index] == '?' || str[index] == '"' ||
				str[index] == '(' || str[index] == ')' ||
				str[index] == '{' || str[index] == '}')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] = str[index + 1] - 32;
			}
		}

		index++;

	}

	return (str);
}
