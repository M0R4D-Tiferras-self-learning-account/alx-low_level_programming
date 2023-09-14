#include "main.h"

/**
 * print_diagonal - A function that print a diagonal
 *
 * @n: an int will be handled
 *
 * Return: void
*/

void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
