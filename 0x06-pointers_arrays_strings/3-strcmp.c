#include "main.h"

/**
 * _strcmp - comaring two strings.(man strcmp)
 *
 * @s1: a string will be handled
 *
 * @s2: a string will be handled
 *
 * Return: an int of thr diff brtwenn s1 and s2
*/

int	_strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
