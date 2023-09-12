#include "main.c"

/**
 * 2-print_alphabet_x10.c - a function that prints 10 time
 *
 * return - void
 */
void	print_alphabet_x10(void)
{
	char	i;
	int	c;

	i = 'a';
	c = 1;
	while (c <= 10)
	{
		while (i <= 'z')
		{
			_putchar(c);
			i++;
		}
		_putchar('\n');
		c++;
	}
}
