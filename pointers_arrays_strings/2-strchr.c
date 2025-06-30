#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character to locate
 *
 * Return: &s[index] - the address of the character,
 * NULL - otherwise return null
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}

		index++;
	}

	if (s[index] == c)
		return (&s[index]);

	return (NULL);
}
