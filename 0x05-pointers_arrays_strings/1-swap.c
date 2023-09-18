#include "main.h"

/**
 * swap_int - swappin 2 variables
 *
 * @a: will be swaped with b
 *
 * @b: will be swaped with a
 *
 * Return: void
*/

void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
