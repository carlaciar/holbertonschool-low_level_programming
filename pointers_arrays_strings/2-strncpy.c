#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination src copies to
 * @src: source the string copies from
 * @n: the number of characters to copy
 *
 * Return: original - the start of dest where it should start to return
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}
