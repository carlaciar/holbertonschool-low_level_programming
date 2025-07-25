#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100 with FizzBuzz logic.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");

		i++;
	}

	printf("\n");

	return (0);
}
