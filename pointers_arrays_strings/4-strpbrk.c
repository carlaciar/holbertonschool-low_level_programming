#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: bytes in this string
 *
 * Return: &s[index] - position of character of the string,
 * null - otherwise return null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int j;

	while (s[index] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[index] == accept[j])
			{
				return (&s[index]);
			}

			j++;

		}

		index++;
	}

	return (NULL);

}
