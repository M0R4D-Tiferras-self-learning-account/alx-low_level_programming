/**
 * _isupper - checks for uppercase character.
 *
 * @c : a char will be handled
 *
 * Return: 1 if c is upper case, and 0 otherwise
*/

int	_isupper(int c)
{
	if (c <= 90 && c >= 60)
	{
		return (1);
	}
	else
		return (0);
}
