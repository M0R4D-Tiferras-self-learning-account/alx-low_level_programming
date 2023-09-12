#include "main.h"

/**
* _islower - checks for lowercase character
*
* @c: character to be checked in ASCII value
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
