#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:memory area poined to by s
 * @b:constant byte
 * @n: number of bytes of the memory area
 *
 * Return: original - start of s string
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original = s;
	unsigned int i = 0;

	while (i <= n)
	{
		*s = b;
		s++;
	}

	return (original);
}



