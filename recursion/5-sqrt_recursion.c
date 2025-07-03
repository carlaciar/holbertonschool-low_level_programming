#include "main.h"

/**
 * _sqrt_subtract - function that finds the square root by minusing
 * odd numbers until it 0's
 * @n: the square root number
 * @odd: the number to minus to find the square root
 * @count: count the amount of steps which is the square root result
 *
 * Return: count - the square root answer
 * -1 if does not have a natural square root
 *  otherwise keep minusing odd numbers until 0
 *
 */
int _sqrt_subtract(int n, int odd, int count)
{

	if (n == 0)
	{
		return (count);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_subtract(n - odd, odd + 2, count + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the numer to square root
 *
 * Return: result of natural square root using _sqrt_subtract
 * -1 if does not have a natural square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_subtract(n, 1, 0));
}
