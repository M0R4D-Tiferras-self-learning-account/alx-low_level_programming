#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array will be handled
 *
 * @n: size of an array
 *
 * Return: void
*/

void	reverse_array(int *a, int n)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = n - 1;
	while (start < n)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
