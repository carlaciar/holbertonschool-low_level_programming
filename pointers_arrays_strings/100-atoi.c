#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string
 *
 * Return: 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int index = 0;
	int sign = 1;
	int result = 0;
	int digit;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
			sign *= -1;
		else if (s[index] >= '0' && s[index] <= '9')
		break;

		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		digit = s[index] - '0';

		result = result * 10 + (digit * sign);

		index++;

	}

	return (result);
}

