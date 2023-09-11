#include <unistd.h>

/**
 * main - A program that prints a string without using printf or puts.
 *
 * Return: 1 (Failure)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*str)
		write(1, str++, 1);

	return (1);
}
