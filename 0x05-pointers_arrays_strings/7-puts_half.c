#include "main.h"
#include <unistd.h>

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

	if (hlen % 2 == 0)
	{
		start = hlen / 2;
	}
	else
	{
		start = (hlen + 1) / 2;
	}

	while (str[start] != '\0')
	{
		write(1, &str[start], 1);
		start++;
	}
	write(1, "\n", 1);
}
