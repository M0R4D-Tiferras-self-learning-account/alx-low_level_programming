#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the initial string
 *
 * @c: string to search
 *
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found
*/

char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
