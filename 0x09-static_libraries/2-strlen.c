#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: string will be handled
 *
 * Return: length of s
*/

int	_strlen(char *s)
{
	int i = 0;

	while (s[i])
		++i;

	return (i);
}
