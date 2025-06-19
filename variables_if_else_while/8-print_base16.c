#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = 48;
	char letter = 'a';

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
