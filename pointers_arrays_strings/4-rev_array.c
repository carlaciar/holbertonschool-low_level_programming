#include "main.h"

/** 
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int length = 0;
	int start = 0;
	int end;
	int i = 0;

	while (a[length] != '\0')
	{
		length++;
	}

	end = n - 1;

	while (start < end && i < n)
	{
		char temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
		i++;
	}
}
