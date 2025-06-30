#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: copies to this destination
 * @src: what is being copied
 * @n: the value of bytes that is being copies
 *
 * Return: original - returns the start of dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (original);

}
