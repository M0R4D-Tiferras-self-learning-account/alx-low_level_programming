#include "main.h"

/**
 * puts_half - printing the half of a string
 *
 * @str: a string will be handled
 *
 * Return: void
*/

void	puts_half(char *str)
{
	int	hlen;
	int	start;

	hlen = 0;
	while (str[hlen] != '\0')
	{
		hlen++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	while (str[hlen] != '\0')
	{
		write(1, &str[hlen], 1);
		hlen++;
	}
	write(1, "\n", 1);
}
