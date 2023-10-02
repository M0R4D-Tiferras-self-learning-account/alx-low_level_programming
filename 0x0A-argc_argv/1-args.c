#include <stdio.h>

/**
 * main - printing the number of arguments
 *
 * @argc: arg counter
 *
 * @argv: arg vector
 *
 * Return: 0
*/

int	main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
