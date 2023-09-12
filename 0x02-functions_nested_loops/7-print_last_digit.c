#include "main.h"
#include <unistd.h>

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n : an initger will be checked
 *
 * Return: the absulute value of n
*/

int	_abs(int n)
{
	return ((n < 0) ? -n : n);
}

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
