#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
*/

void	more_numbers(void)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (c <= 10)
	{
		while (i <= 14)
		{
			(j > 9) ? _putchar((j / 10) + '0') : 0;
			_putchar((j % 10) + '0');
			i++;
		}
		_putchar('\n');
		c++;
	}
}
