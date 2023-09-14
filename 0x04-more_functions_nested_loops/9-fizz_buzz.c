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

		else if ((i > 9 && i < 100) && !(i % 5 == 0) && !(i % 3 == 0))
		{
			t = (i / 10) % 10;
			o = i % 10;
			_putchar(t + '0');
			_putchar(o + '0');
		}
		else if (i <= 9 && i >= 1)
			_putchar(i + '0');
		_putchar('\n');
		i++;
	}
	return (0);
}
