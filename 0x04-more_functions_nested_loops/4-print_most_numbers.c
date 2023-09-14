#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line.
 *
 * Return: void
*/

void	print_most_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9 && i >= 0)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
