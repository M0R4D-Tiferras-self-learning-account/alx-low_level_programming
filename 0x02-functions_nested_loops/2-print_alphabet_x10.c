#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */

void	print_alphabet_x10(void)
{
	char	i;
	int	c;

	i = 'a';
	c = 1;
	while (c <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		c++;
	}
}
