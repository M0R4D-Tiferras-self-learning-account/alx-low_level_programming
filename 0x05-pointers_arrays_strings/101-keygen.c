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
	char	pass[100];
	int	i;

	i = 0;
	while (i < 100)
	{
		pass[i] = 32 + rand() % 95;
		putchar(pass[i]);
		i++;
	}
	return (0);
}
