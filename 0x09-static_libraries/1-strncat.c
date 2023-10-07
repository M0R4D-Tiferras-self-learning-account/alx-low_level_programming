#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination str
 *
 * @src: source str
 *
 * @n: size of bytes to concatenate
 *
 * Return: dest
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
