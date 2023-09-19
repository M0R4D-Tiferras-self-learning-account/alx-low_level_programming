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
	const char pass[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+=-[]{}|;:,.<>?";
	const int password_length = 15;

	srand(time(NULL));

	for (int i = 0; i < password_length; i++)
	{
		int index = rand() % (sizeof(pass) - 1);
		putchar(pass[index]);
	}
	putchar('\n');
	return (0);
}
