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
		for (i = 0; i <= 14; i++)
		{
			(i > 9) ? _putchar((i / 10) + '0') : 0;
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		c++;
	}
}
