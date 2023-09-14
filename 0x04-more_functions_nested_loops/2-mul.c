/**
 * mul - function that multuplies tow int
 *
 * @a: an int will be handled
 * @b: an int will be handled
 *
 * Return: the multuplication of a and b
*/
int	mul(int a, int b)
{
	if ((a && b) <= 9 && (a && b) >= 0)
	{
		return (a * b);
	}
	else
		return (NULL);
}
