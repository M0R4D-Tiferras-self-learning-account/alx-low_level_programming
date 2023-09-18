#include "main.h"
#include <unistd.h>


/**
 * print_rev - printing str in reverse order
 *
 * @s: will be printed in reverse
 *
 * Return: void
*/

void	print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
