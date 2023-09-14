#include <unistd.h>
#include "main.h"

/**
 * print_number - prints the numbers manupulating th ascii
 *
 * @n: the number that will be printed
 *
 * Return: void
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}

	if (num > 9)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
