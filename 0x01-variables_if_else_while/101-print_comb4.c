#include <stdio.h>
/**
 * main - A  C program that  prints all
 * combinations of three digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 2;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x <= 6 && y <= 8 && z <= 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
