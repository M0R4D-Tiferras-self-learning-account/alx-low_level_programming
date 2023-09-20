#include "main.h"
#include <unistd.h>

/**
 * _strncpy - function that concatenates two strings.
 *
 * @dest: a string will be handled
 *
 * @src: a string will be handled
 *
 * @n: size of the copied charachters
 *
 * Return: a charachter
*/

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if ((dest[j] && src[i]) != '\0')
	{
		return (NULL);
	}
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (dest[j] != '\0')
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
