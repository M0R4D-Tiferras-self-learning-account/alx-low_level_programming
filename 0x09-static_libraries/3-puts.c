#include "main.h"

/**
 * _puts - func to print a str
 *
 * @str : str will be displayed
 *
 * Return: void
*/

void	_puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);

	_putchar('\n');
}
