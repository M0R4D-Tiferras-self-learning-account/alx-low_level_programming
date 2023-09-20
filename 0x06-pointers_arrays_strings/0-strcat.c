#include "main.h"
#include <unistd.h>

/**
 * _strcat - that concatenates two strings
 *
 * @dest: a string will be handled
 *
 * @src: a string will be handled
 *
 * Return: a charachter
*/

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i] && src[j]) != '\0')
	{
		dest[i - 1] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
