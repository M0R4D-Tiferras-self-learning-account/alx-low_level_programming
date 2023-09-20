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
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
