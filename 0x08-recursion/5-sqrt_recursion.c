#include "main.h"

/**
 * _sqrt_helper - helper function for _sqrt
 *
 * @n: number
 *
 * @i: incrementer
 *
 * Return: natural square root
*/

int	_sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - funcution make the sqrt
 *
 * @n: an int will be handled
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
*/

int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
