#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: string will be handled
 *
 * Return: a strring
*/

char	*cap_string(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{

		if (c == ' ' || c == '\t' || c == '\n' ||
			c == ',' || c == ';' || c == '.' ||
			c == '!' || c == '?' || c == '"' ||
			c == '(' || c == ')' || c == '{' ||
			c == '}')
			s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);
}
