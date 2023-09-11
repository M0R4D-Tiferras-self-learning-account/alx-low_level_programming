#include <stdio.h>

/**
 * main - prints all alphabets
 * starting from z using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x--);
	}
	putchar('\n');
	return (0);
}
