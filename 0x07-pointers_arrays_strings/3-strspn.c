#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: a string will be handled
 *
 * @accept: a string will be handled
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
