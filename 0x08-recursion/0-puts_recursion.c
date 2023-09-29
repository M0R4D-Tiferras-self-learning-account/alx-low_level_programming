#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: a string will be handled
 *
 * Return: void
*/

void	_puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
