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

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = s[i + 1] - 32;
			i++;
		else
			i++;
	}
	return (s);
}
