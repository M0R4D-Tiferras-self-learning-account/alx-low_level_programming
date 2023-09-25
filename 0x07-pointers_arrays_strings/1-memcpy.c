#include "main.h"

/**
 * _memcpy - copy memeory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: n bytes to copies
 *
 * Return: pointer to dest
*/

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	in;

	in = 0;
	while (in < n)
	{
		dest[in] = src[in];
		in++;
	}

	return (dest);
}
