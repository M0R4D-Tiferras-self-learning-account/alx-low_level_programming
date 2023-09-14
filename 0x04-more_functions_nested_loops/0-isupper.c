#include <unistd.h>

/**
 * _isupper - checks for uppercase character.
 *
 * @c : a char will be handled
 *
 * Return: 1 if c is upper case, and 0 otherwise
*/

int	_isupper(int c)
{
	if (c <= "Z" && c >= "A")
	{
		return (1);
	}
	else
		return (0);
}
