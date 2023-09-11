#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase,
 * then in uppercase. followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');

	return (0);
}
