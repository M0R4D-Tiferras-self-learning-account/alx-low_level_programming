#include "main.h"

/**
 * factorial -  function that returns the factorial
 *
 * @n: number to be factored
 *
 * Return: factorial of the int
*/

int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
