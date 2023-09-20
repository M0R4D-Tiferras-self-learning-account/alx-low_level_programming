#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: a string will be handled
 *
 * @src: a string will be handled
 *
 * @n: n byte from the source
 *
 * Return: a char
*/

char	*_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
