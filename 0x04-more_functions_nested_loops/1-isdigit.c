/**
 * _isdigit -  function that checks for a digit (0 through 9).
 *
 * @c : an int will be handled
 *
 * Return: 1 is c id digit an 0 otherwise
*/

int	_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
