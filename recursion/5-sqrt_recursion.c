#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the numer to square root
 *
 * Return: natural square root of a number
 * -1 if does not have a natural square root
 *
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
	{
		guess = 0;
		return (-1);
	}

	if (guess * guess == n)
	{
		int result = guess;

		guess = 0;
		return (result);
	}

	if (guess * guess > n)
	{
		guess = 0;
		return (-1);
	}

	guess++;
	return (_sqrt_recursion(n));
}
