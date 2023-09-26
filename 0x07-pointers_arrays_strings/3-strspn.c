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
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
			break;
	}

	return (count);
}
