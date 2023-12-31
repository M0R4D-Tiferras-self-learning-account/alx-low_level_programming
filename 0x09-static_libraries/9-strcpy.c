#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 *			including the end of str (null terminator)
 * @dest: The destination str
 * @src: The source str
 * Return: ptr to dest
*/

char	*_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
