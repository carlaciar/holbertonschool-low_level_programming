#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string to locate into hackstack
 *
 * Return: &haystack[index] - position of the substring found in hackstack
 * NULL - returns nothing
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0;
	int sub;

	while (haystack[index] != '\0')
	{
		sub = 0;

		while (haystack[index + sub] == needle[sub])
		{
			if (needle[sub + 1] == '\0')
			{
				return (&haystack[index]);
			}

			sub++;
		}

		index++;

	}

	return (NULL);

}

