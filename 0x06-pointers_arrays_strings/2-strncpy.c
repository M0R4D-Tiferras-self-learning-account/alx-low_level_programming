#include "main.h"
#include <unistd.h>

/**
 * _strncpy - function that copy two strings.
 *
 * @dest: a string will be handled
 *
 * @src: a string will be handled
 *
 * @n: size of the copied charachters
 *
 * Return: a charachter
*/

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
