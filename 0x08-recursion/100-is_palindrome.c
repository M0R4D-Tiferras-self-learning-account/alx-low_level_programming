#include "main.h"

/**
 * _strlen_recursion - calcul the length
 *
 * @s: str will be handled
 *
 * Return: the length of a str recursevely
*/

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares characters of the string.
 *
 * @s: string will be handled
 *
 * @n1: min to handle
 *
 * @n2: max to handle
 *
 * Return: 0
*/

int	comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 *
 * @s: string will be handled
 *
 * Return: 1 if s is a palindrome else 0
*/

int	is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
