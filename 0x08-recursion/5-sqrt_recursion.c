#include "main.h"

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
	long	index;
	long	b;

	b = n;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
