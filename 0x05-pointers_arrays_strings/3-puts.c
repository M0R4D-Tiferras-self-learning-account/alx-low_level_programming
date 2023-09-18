#include "main.h"
#include <unistd.h>

/**
 * _puts - function that print a string
 *
 * @str: a string will be printed
 *
 * Return: Void
*/

void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
