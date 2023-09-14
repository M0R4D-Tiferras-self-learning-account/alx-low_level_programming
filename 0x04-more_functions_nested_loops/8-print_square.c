#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 *
 * Return: void
*/
void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
