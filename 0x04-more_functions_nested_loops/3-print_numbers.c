/**
 * print_numbers - a function that print integers
 *
 * Return: void
*/

void	print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9 && i >= 0)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar("\n");
}
