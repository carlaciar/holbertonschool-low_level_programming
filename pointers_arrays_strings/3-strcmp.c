#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if same, -1 if less than, 1 is postive
 *
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] < s2[index])
		{
		return (-1);
		}

		else if (s1[index] > s2[index])
		{
		return (+1);
		}

		index++;
	}

	if (s1[index] == s2[index])
	{
		return (0);
	}

	else
	{
		return (s1[index] - s2[index]);
	}

	index++;
}
