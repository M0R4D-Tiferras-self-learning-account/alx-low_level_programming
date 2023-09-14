#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * * Return: nothing
*/
void	print_line(int n)
{
	int	i;

	i = 1;
	while (i <= n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_puchar('\n');
}
