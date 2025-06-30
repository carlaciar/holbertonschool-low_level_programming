#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: bytes from this string
 *
 * Return: count - length of prefix substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int count = 0;
	unsigned int j;
	unsigned int found;

	while (s[index] != '\0')
	{
		j = 0;
		found = 0;

		while (accept[j] != '\0')
		{
			if (s[index] == accept[j])
			{
				found = 1;
				break;
			}

			j++;

		}

		if (!found)
		{
			break;
		}

		count++;
		index++;

	}

	return (count);

}

