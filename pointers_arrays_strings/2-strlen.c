#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length - length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
