#include <unistd.h>
#include <stdio.h>
/*
 * main - Write a program that computes
 * and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (success)
**/

int	main(void)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
		i++;
	}
	printf("%d\n", s);
	return (0);
}
