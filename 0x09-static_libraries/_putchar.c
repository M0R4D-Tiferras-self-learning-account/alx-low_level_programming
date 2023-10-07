#include <unistd.h>

/**
 * _putchar - writes the character
 *
 * @c: the character
 *
 * Return: a possitive num in succes, or a negative num in failure
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
