#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @n: bytes of the memory area
 *
 * @s: a char will be handled
 *
 * @s: a char will be handled
 *
 * Return: a char s
*/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	in;

	in = 0;
	while (in < n)
	{
		s[in] = b;
		in++;
	}
	return (s);
}
