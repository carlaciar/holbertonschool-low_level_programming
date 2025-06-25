#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copies src and appends this string
 * @src: copies string to dest
 *
 * Return: original - return from the start of dest
 *
 */
char *_strcat(char *dest, char *src)
{
	char *original = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}
