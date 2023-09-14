#include <unistd.h>

/**
 * _putchar - a printing function
 *
 * @c: a charachter will be handled
 *
 * Return: void
*/

void	_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * printnbr - function to print numbers traversing the base 10
 *
 * @n: an int will be handled
 *
 * Return: Void
*/

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

/**
 * main - FizzBuzz challenge
 *
 * Return: Always"0" (success)
*/

int	main(void)
{
	int	i;
	int	t;
	int	o;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			write(1, "FizzBuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "Fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "Buzz", 4);
		}
		else
			printnbr(i);

		_putchar('\n');
		i++;
	}
	return (0);
}
