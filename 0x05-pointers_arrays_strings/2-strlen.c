#include "main.h"

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
