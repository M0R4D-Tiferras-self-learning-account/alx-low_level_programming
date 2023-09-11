#include <stdio.h>

/**
 * main - A program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
