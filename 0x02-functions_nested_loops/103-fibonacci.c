#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the
 *		Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long p = 0, c = 1, next, sum = 0;

	while (c <= 4000000)
	{
		next = p + c;
		p = c;
		c = next;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%lu\n", sum);

	return (0);
}
