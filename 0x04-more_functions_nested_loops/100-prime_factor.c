#include <unistd.h>
#include <stdio.h>

/**
 * main - program that finds and prints
 * the largest prime factor of the number 612852475143
 *
 * Return: 0 (success)
*/

int	main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n /= i;
	}

	printf("%ld\n", n);

	return (0);
}
