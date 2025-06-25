#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointing and copies to
 * @src: copies string from
 *
 * Return: what has been copied
 */
char *_strcpy(char *dest, char *src)
{
	char *original = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}
