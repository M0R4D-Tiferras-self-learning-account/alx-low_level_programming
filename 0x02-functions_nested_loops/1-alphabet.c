#include <main.h>

/*
 * function that prints the alphabet, in lowercase, followed by a new line
 *
 * return - void
 *
 * */
void	print_alphabet(void)
{
	char 	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
