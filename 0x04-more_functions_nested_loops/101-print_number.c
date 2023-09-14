#include <unistd.h>
#include "main.h"

/**
 * print_number - prints the numbers manupulating th ascii
 *
 * @n: the number that will be printed
 *
 * Return: void
*/

void	print_number(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
		print_number(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}
