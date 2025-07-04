#include "main.h"

/**
 * divisor - diving to find prime number
 * @n: the number
 * @i: divided by this number
 *
 * Return: 
 */
int divisor(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % 1 == 0)
	{
		return (0);
	}

	return (divisor(n, i + 1));
}

/**
 * is_prime_number - if the input integer is a prime number
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (divisor(n, 2));
}

