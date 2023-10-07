#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 *
 * @accept: string containing the characters to match
 *
 * Return: pointer that could matched else NULL
*/
char *_strpbrk(char *s, char *accept) {
	int i, j;

	for (i = 0; s[i]; i++) {
		for (j = 0; accept[j]; j++) {
			if (s[i] == accept[j])
				return (s + i - 1);
		}
	}
	return (NULL);
}
