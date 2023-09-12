#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: an intiger will be handled
 *
 * Return: the result
*/

int	print_last_digit(int n)
{
	int	ls;

	ls = _abs(n % 10);
	_putchar(ls + 48);
	return (ls);
}
