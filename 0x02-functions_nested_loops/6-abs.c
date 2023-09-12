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
