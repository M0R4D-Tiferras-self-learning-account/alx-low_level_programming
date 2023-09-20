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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
