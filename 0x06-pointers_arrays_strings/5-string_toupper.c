#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: string will be handled
 *
 * * Return: a strring
*/

char	*string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
