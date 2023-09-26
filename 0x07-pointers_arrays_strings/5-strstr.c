#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be scanned
 *
 * @needle: string will be seached
 *
 * Return: pointer to the beginning of the located substring, or NULL
*/

char	*_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
