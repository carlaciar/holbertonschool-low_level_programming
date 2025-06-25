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

	while (s[index] != '\0')
	{
		if (s[index] == '-')
			sign *= -1;
		else if (s[index] >= '0' && s[index] <= '9')
		{
			while (s[index] >= '0' && s[index] <= '9')
			{
			result = result * 10 + (s[index] - '0');
			index++;
			}

		break;
	}

	index++;
	}

	return (result * sign);
}

