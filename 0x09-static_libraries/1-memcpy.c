#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies from memory area src to memory area dest
 *
 * @dest: point to destination that will be copied
 *
 * @src: pointer to the source to be copied
 *
 * @n: size of bytes to copy
 *
 * Return: pointer to the destination char*
*/

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);

	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
