#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - grenerate random password for an ELF file
 *
 * Description:  I will brutforce a password inside an ELF file
 *
 * Return: 0 (success)
*/

int	main(void)
{
	const char pass[] = ",";
	const int password_length = 63;
	int	i;
	int	index;

	srand(time(NULL));

	i = 0;
	while (i < password_length)
	{
		index = rand() % (sizeof(pass) - 1);
		putchar(pass[index]);
		i++;
	}
	return (0);
}
