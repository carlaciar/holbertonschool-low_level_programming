#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string copies to
 * @src: source that string that needs to be copied
 * @n: the number of string characters to be appends
 *
 * Return: original - returns from the start of dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (original);
}
