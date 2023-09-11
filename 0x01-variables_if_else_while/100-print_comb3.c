#include <stdio.h>

/**
 * main - A program prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('i' + '0');
			putchar('j' + '0');
			if (j < 10)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
}
