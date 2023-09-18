#include "main.h"
#include <unistd.h>
/**
 * _strlen - calculate the length of a string
 *
 * @s: a string will be handled
 *
 * Return: The length of the string
*/

int	_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_rev - printing str in reverse order
 *
 * @s: will be printed in reverse
 *
 * Return: void
*/

void	print_rev(char *s)
{
	int	rev;

	rev = _strlen(s);
	while (s[rev] >= 0)
	{
		write(1, &s[rev], 1);
		rev--;
	}
	write(1, "\n", 1);
}
