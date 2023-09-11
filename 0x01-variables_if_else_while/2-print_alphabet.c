#include <stdio.h>

/**
 * main - A program that print the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
