#include "main.h"

/**
 * _strlen_recursion - returning the length of a string recursuvly
 *
 * @s: string will be handled
 *
 * Return: the length
*/

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
